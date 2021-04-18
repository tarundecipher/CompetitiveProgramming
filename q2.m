chareqn = input('Input array of coefficients for the characteristic equation int form of an array [a0....a1]');
charlength = length(chareqn);
RouthMatrixColumn = round(charlength / 2);

RouthMatrix = zeros(charlength, RouthMatrixColumn);

RouthMatrix(1, :) = chareqn(1, 1:2:charlength); %creating first row of matrix by skipping every other element.
% creating second row of the matrix (if coefficient length is odd , length of second row will be different).
if (mod(charlength, 2) ~= 0)
    RouthMatrix(2, 1:RouthMatrixColumn - 1) = chareqn(1, 2:2:charlength);
else
    RouthMatrix(2, :) = chareqn(1, 2:2:charlength);
end

%% Calculate other rows of the matrix

for i = 3:charlength%from 3rd row to end.

    %  special case: row of all zeros
    if RouthMatrix(i - 1, :) == 0
        order = (charlength - i);
        j = 0;
        k = 1;

        for j = 1:RouthMatrixColumn - 1
            RouthMatrix(i - 1, j) = (order - j) * RouthMatrix(i - 2, k);
            k = k + 1;
            j = j + 2;
        end

    end

    for j = 1:RouthMatrixColumn - 1
        x = RouthMatrix(i - 1, 1); %  first element of the row
        RouthMatrix(i, j) = ((RouthMatrix(i - 1, 1) * RouthMatrix(i - 2, j + 1)) - . ...
            (RouthMatrix(i - 2, 1) * RouthMatrix(i - 1, j + 1))) / x;
    end

    %  special case(zero in first row)
    if RouthMatrix(i, 1) == 0
        RouthMatrix(i, 1) = ep;
    end

end

%%  Compute number of right hand side poles

unstablePoles = 0;
%   Check change in signs
for i = 1:charlength - 1

    if sign(RouthMatrix(i, 1)) * sign(RouthMatrix(i + 1, 1)) == -1
        unstablePoles = unstablePoles + 1;
    end

end

%   Result
fprintf('\n Routh Table:\n')
RouthMatrix

if unstablePoles == 0
    fprintf('it is a stable system')
else
    fprintf(' it is an unstable system')
end

fprintf('\n Number of right hand side poles =%2.0f\n', unstablePoles)
