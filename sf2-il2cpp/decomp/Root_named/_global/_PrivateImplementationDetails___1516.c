// TypeDefIndex 1516
// Namespace: 
// internal sealed class <PrivateImplementationDetails>
// Fields:
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=28 0917B181DFABA4B1C39389FA23A9F4C86911DC67D2A41429CBB7E96759A933B6 /*Metadata offset 0x6DB1C0*/; // 0x0
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 193D8929CA5109D6E38BC1498B97D8DBFF53B49F98827C2F3C8E64D29C35B918 /*Metadata offset 0x6DB1E0*/; // 0x1C
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=24 19AD3623A19D0EE4B7E5ACD9EA7A741A6CD680183CCAB300A573C6951EA97BDE /*Metadata offset 0x6DB1F8*/; // 0x2C
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 1E94CE8D9E95F9800C584875E46891FB687655C41B8D0209C7B2F5D5B59DA6F9 /*Metadata offset 0x6DB218*/; // 0x44
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 2581B09F434BC49D16AEE9E4869D8A3C2F8F9FB2FCE360209C4D27EEC5FF4C7E /*Metadata offset 0x6DB240*/; // 0x64
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 3A0B090895FEF4534B8C9BA7F9852C4A1122BF2036B87AC283D2089EA1E53EDF /*Metadata offset 0x6DB268*/; // 0x84
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=56 3EBB838D673A3618780360FE3D2D06FBEFB0A2DDA6FD866A97F1391B04D5CC7A /*Metadata offset 0x6DB290*/; // 0xA4
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=111970 49EC6316B9031829640B7EA5ECA11C55E78B171B51D4C641C1D409A2006FBD12 /*Metadata offset 0x6DB2D0*/; // 0xDC
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 5C29EBE1EB236FA277F30993D986F1F3C5BA14248ADDC290962A7AE60CF2A3A1 /*Metadata offset 0x6F6838*/; // 0x1B63E
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 61266859739C06CDE84CB283D526C03AFC779578260F5E115A379662717205E1 /*Metadata offset 0x6F6860*/; // 0x1B65E
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 703BE8CB5574D9E7B636FE613F3FB7E430E5F222DA765D863B9D5DB0A255DAD1 /*Metadata offset 0x6F6878*/; // 0x1B66E
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 831DE16E8F3D03A10D3593441D5B82AB9EB8EF9405C53021470665EA35332285 /*Metadata offset 0x6F6890*/; // 0x1B67E
//   internal static readonly long 8BC5AA4321387997B5D86EDA80E56B6BE2547A9E5797DF383BF1107BA47DF6A4 = 16607272734621728; // 0x1B690
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=52 8C3BBEFBF4450EEECE8BF9126ACC7F9A9C434140E2CB6295436B33642534B0DC /*Metadata offset 0x6F68B8*/; // 0x1B698
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=32 8E97CE6CEAB319D12C4D4BA4DA08AB8F9B28DD9EEB7ECCA86242A5C534FBC5EF /*Metadata offset 0x6F68F0*/; // 0x1B6CC
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=24 9FF1698BF4582CED360C5B73815B420A720E16559568F07F83655276E996ED29 /*Metadata offset 0x6F6918*/; // 0x1B6EC
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=118347 BD67B6F604C8364E97ABCCD1A283041799F224EC9F04E08277EE2D91070CE20F /*Metadata offset 0x6F6938*/; // 0x1B704
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 BF78AFFF7EA8CA43185A9BD129F97A458325D93CD63D86A8FDC9F98EC00FECAA /*Metadata offset 0x713788*/; // 0x3854F
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 C0E0211B207A5474E25AC69B2D9096585F68A511C350A80A563ACD6B3E149322 /*Metadata offset 0x7137A0*/; // 0x3855F
//   internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 EE3F1B56C7C842C14B392D38DC90896D29588E4A27E66FF9D2F167D2C09D5B51 /*Metadata offset 0x7137B8*/; // 0x3856F

// ===== internal static uint ComputeStringHash(string s)  [RVA 0x319E7C4]
// <PrivateImplementationDetails>$$ComputeStringHash @ RVA 0x319E7C4

uint32_t <PrivateImplementationDetails>__ComputeStringHash(System_String_o *s,MethodInfo *method)

{
  uint16_t uVar1;
  uint32_t uVar2;
  int index;
  
  if (s == (System_String_o *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    if (0 < (s->fields)._stringLength) {
      index = 0;
      do {
        uVar1 = System_String__get_Chars(s,index,(MethodInfo *)0x0);
        index = index + 1;
        uVar2 = (uVar2 ^ uVar1) * 0x1000193;
      } while (index < (s->fields)._stringLength);
    }
  }
  return uVar2;
}


// ===== internal static void ThrowSwitchExpressionException(object unmatchedValue)  [RVA 0x319E840]
// <PrivateImplementationDetails>$$ThrowSwitchExpressionException @ RVA 0x319E840

void <PrivateImplementationDetails>__ThrowSwitchExpressionException
               (Il2CppObject *unmatchedValue,MethodInfo *method)

{
  System_Runtime_CompilerServices_SwitchExpressionException_o *__this;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_Runtime_CompilerServices_SwitchExpressionException_TypeInfo);
  __this = (System_Runtime_CompilerServices_SwitchExpressionException_o *)thunk_FUN_01bda818();
  System_Runtime_CompilerServices_SwitchExpressionException___ctor
            (__this,unmatchedValue,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_<PrivateImplementationDetails>_ThrowSwitchExpressionException__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this,uVar1);
}

