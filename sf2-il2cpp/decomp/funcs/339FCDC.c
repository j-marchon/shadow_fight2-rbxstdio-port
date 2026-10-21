// NMLHEJAFMIL$$AJJLBBCJAAL @ RVA 0x339FCDC

System_String_o *
NMLHEJAFMIL__AJJLBBCJAAL(NMLHEJAFMIL_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
                    /* try { // try from 0349fce8 to 0359fda3 has its CatchHandler @ 0349fce8
                       catch() { ... } // from try @ 0349fce8 with catch @ 0349fce8
                       catch() { ... } // from try @ 0349fe00 with catch @ 0349fce8
                       catch() { ... } // from try @ 0349fe34 with catch @ 0349fce8
                       catch() { ... } // from try @ 0349fe68 with catch @ 0349fce8
                       catch() { ... } // from try @ 0349fe98 with catch @ 0349fce8 */
  if ((DAT_04567ca2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5032);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5033);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5034);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5035);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567ca2 = 1;
  }
  pSVar1 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (pSVar1 == (System_String_o *)0x0) {
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5032,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0349fda4 to 0359fdab has its CatchHandler @ 0349fe4c */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5033,(MethodInfo *)0x0)
    ;
    pSVar1 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  NMLHEJAFMIL__DHAAGKPHJLA(pSVar1,method_00);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0349fdd0 to 0359fdd7 has its CatchHandler @ 0349fe44 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5034,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5035,(MethodInfo *)0x0);
                    /* try { // try from 0349fdfc to 0359fdff has its CatchHandler @ 0349fe34 */
                    /* try { // try from 0349fe00 to 0359fe23 has its CatchHandler @ 0349fce8 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  return pSVar1;
}

