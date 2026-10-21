// AMHFFFODDOC$$EOLACNMEFKC @ RVA 0x343BE78

UnityEngine_Sprite_o *
AMHFFFODDOC__EOLACNMEFKC
          (System_String_o *PHLFGGGHGAK,System_String_o *DMCFDIBHCPD,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  UnityEngine_Sprite_array *pUVar4;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar5;
  System_Object_array *args;
  long lVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ulong uVar8;
  UnityEngine_Object_o *x;
  ulong uVar9;
  
  method_00 = (MethodInfo *)DMCFDIBHCPD;
  if ((DAT_045681de & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_6);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1532);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045681de = 1;
    method_00 = extraout_x1;
  }
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pUVar4 = AMHFFFODDOC__MMHFNAEHAKC(PHLFGGGHGAK,method_00);
                    /* try { // try from 0353bf1c to 0363bf43 has its CatchHandler @ 0353c094 */
  if ((pUVar4 != (UnityEngine_Sprite_array *)0x0) && (0 < (int)pUVar4->max_length)) {
    uVar9 = 0;
    bVar2 = false;
    uVar8 = pUVar4->max_length & 0xffffffff;
    do {
      if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      x = (UnityEngine_Object_o *)pUVar4->m_Items[uVar9];
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
                    /* try { // try from 0353bf78 to 0363bfa3 has its CatchHandler @ 0353c090 */
        bVar2 = true;
      }
      else {
        if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
        bVar3 = System_String__op_Equality(pSVar5,DMCFDIBHCPD,(MethodInfo *)0x0);
        if (bVar3) {
          return (UnityEngine_Sprite_o *)x;
        }
      }
      uVar1 = (uint)pUVar4->max_length;
      uVar8 = (ulong)uVar1;
      uVar9 = uVar9 + 1;
                    /* try { // try from 0353bfac to 0363bfb3 has its CatchHandler @ 0353c08c */
    } while ((long)uVar9 < (long)(int)uVar1);
    if (bVar2) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1532,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_6,(MethodInfo *)0x0)
      ;
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((DMCFDIBHCPD != (System_String_o *)0x0) &&
         (lVar6 = thunk_FUN_01bda71c(DMCFDIBHCPD,(((args->obj).klass)->_1).element_class),
         lVar6 == 0)) {
        uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0353c104 to 0363c12b has its CatchHandler @ 0353c140 */
        FUN_01bab798(uVar7,0);
      }
                    /* try { // try from 0353c070 to 0363c073 has its CatchHandler @ 0353c088 */
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 0353c074 to 0363c077 has its CatchHandler @ 0353bd1c */
                    /* try { // try from 0353c078 to 0363c07b has its CatchHandler @ 0353c084 */
      args->m_Items[0] = (Il2CppObject *)DMCFDIBHCPD;
                    /* try { // try from 0353c07c to 0363c0ab has its CatchHandler @ 0353bd1c */
      thunk_FUN_01c20e04(args->m_Items,DMCFDIBHCPD);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353c078 with catch @ 0353c084
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353c070 with catch @ 0353c088
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353bfac with catch @ 0353c08c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353bf78 with catch @ 0353c090
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353bf1c with catch @ 0353c094
                        */
      if ((PHLFGGGHGAK != (System_String_o *)0x0) &&
         (lVar6 = thunk_FUN_01bda71c(PHLFGGGHGAK,(((args->obj).klass)->_1).element_class),
         lVar6 == 0)) {
        uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar7,0);
      }
      if (1 < (uint)args->max_length) {
                    /* try { // try from 0353c0ac to 0363c0af has its CatchHandler @ 0353c0c4 */
        args->m_Items[1] = (Il2CppObject *)PHLFGGGHGAK;
        thunk_FUN_01c20e04(args->m_Items + 1,PHLFGGGHGAK);
                    /* catch() { ... } // from try @ 0353c0ac with catch @ 0353c0c4 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(pSVar5,args,(MethodInfo *)0x0);
        return (UnityEngine_Sprite_o *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* try { // try from 0353bfb4 to 0363c06f has its CatchHandler @ 0353bd1c */
  return (UnityEngine_Sprite_o *)0x0;
}

