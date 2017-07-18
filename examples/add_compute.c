// Generated by the Tensor Algebra Compiler (tensor-compiler.org)
int32_t A0_pos = 0;
int32_t A1_pos = A1_pos_arr[A0_pos];
for (int32_t iB = 0; iB < B0_size; iB++) {
  int32_t B1_pos = B1_pos_arr[iB];
  int32_t C1_pos = C1_pos_arr[iB];
  while ((B1_pos < B1_pos_arr[iB + 1]) && (C1_pos < C1_pos_arr[iB + 1])) {
    int32_t jB = B1_idx_arr[B1_pos];
    int32_t jC = C1_idx_arr[C1_pos];
    int32_t j = min(jB, jC);
    if ((jB == j) && (jC == j)) {
      A_val_arr[A1_pos] = B_val_arr[B1_pos] + C_val_arr[C1_pos];
      A1_pos++;
    }
    else if (jB == j) {
      A_val_arr[A1_pos] = B_val_arr[B1_pos];
      A1_pos++;
    }
    else {
      A_val_arr[A1_pos] = C_val_arr[C1_pos];
      A1_pos++;
    }
    if (jB == j) B1_pos++;
    if (jC == j) C1_pos++;
  }
  while (B1_pos < B1_pos_arr[iB + 1]) {
    int32_t jB0 = B1_idx_arr[B1_pos];
    A_val_arr[A1_pos] = B_val_arr[B1_pos];
    A1_pos++;
    B1_pos++;
  }
  while (C1_pos < C1_pos_arr[iB + 1]) {
    int32_t jC0 = C1_idx_arr[C1_pos];
    A_val_arr[A1_pos] = C_val_arr[C1_pos];
    A1_pos++;
    C1_pos++;
  }
}