// Core.Network.ServerProvider$$GGEHKFLFFME @ RVA 0x357A8C0

void Core_Network_ServerProvider__GGEHKFLFFME
               (Core_Network_ServerProvider_o *__this,ServerProviderBase_BNPEHNICKPJ_o *OFOIILMAIPG,
               MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  
  if ((DAT_04568ca7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1064);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1065);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1066);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1067);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1068);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1069);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0367a94c to 0377a973 has its CatchHandler @ 0367ab90 */
    DAT_04568ca7 = 1;
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1064,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1065,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  pSVar5 = IMAPABEJECG__BKKOBBDEPFH((MethodInfo *)0x0);
  if (OFOIILMAIPG != (ServerProviderBase_BNPEHNICKPJ_o *)0x0) {
                    /* try { // try from 0367a9a8 to 0377a9d3 has its CatchHandler @ 0367ab8c */
    ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
              (OFOIILMAIPG,pSVar4,(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    pSVar4 = IMAPABEJECG__PLPICDIFHHG((MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1066,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0367aa10 to 0377aa17 has its CatchHandler @ 0367ab84 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1067,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0367aa18 to 0377aa23 has its CatchHandler @ 0367ab7c */
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0367aa2c to 0377aa3b has its CatchHandler @ 0367ab80 */
    bVar1 = System_String__op_Equality(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 0367aa40 to 0377aa4b has its CatchHandler @ 0367ab78 */
    if (((bVar1) && (bVar1 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0), bVar1)) &&
       (bVar1 = IMAPABEJECG__FCBJDMNEPGB((MethodInfo *)0x0), bVar1)) {
      pSVar4 = IMAPABEJECG__ADBBGOBBAJA((MethodInfo *)0x0);
      bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar4,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0367aa84 to 0377aaa7 has its CatchHandler @ 0367ab70 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1068,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0367aaa8 to 0377ab43 has its CatchHandler @ 0367a83c */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1069,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        pSVar5 = IMAPABEJECG__ADBBGOBBAJA((MethodInfo *)0x0);
        ServerProviderBase_BNPEHNICKPJ__LFENGGKOJDO
                  (OFOIILMAIPG,pSVar4,(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

