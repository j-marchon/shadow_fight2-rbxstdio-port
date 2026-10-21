// PNHGEFAOFFE.CKJPKMDDPDA$$MoveNext @ RVA 0x3183458

bool PNHGEFAOFFE_CKJPKMDDPDA__MoveNext(PNHGEFAOFFE_CKJPKMDDPDA_o *__this,MethodInfo *method)

{
  DGGBFKNKEAH_o *pDVar1;
  long lVar2;
  UnityEngine_Purchasing_Product_array *MOJLFMJLBDH;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  PNHGEFAOFFE_o *__this_00;
  GHOPMMBKGMB_o *__this_01;
  Il2CppObject **ppIVar3;
  
  if ((DAT_045669c9 & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_23);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3845);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045669c9 = 1;
    method = extraout_x1;
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return false;
  }
  (__this->fields).__1__state = -1;
  __this_00 = (__this->fields).__4__this;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar1 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    if (pDVar1 != (DGGBFKNKEAH_o *)0x0) {
      lVar2 = (*(pDVar1->klass->vtable)._10_NMGFAJBFPNI.methodPtr)
                        (pDVar1,(pDVar1->klass->vtable)._10_NMGFAJBFPNI.method);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x18) == 0)) {
        MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)MOPNMEHIMFJ,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3845,
                   (MethodInfo *)0x0);
        LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)LFINFBNOLFG,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_23,
                   (MethodInfo *)0x0);
        message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
        return false;
      }
      if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 != (PNHGEFAOFFE_o *)0x0) {
        __this_01 = ACHLOMELAJE_TypeInfo->static_fields->FGMAJAGGPCD;
        if (DAT_045655e8 == '\0') {
          FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
          DAT_045655e8 = '\x01';
        }
                    /* try { // try from 032835d0 to 033836c7 has its CatchHandler @ 032835d0
                       catch() { ... } // from try @ 032835d0 with catch @ 032835d0
                       catch() { ... } // from try @ 03283750 with catch @ 032835d0
                       catch() { ... } // from try @ 032837fc with catch @ 032835d0
                       catch() { ... } // from try @ 03283804 with catch @ 032835d0
                       catch() { ... } // from try @ 032838a8 with catch @ 032835d0 */
        pDVar1 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
        if ((pDVar1 != (DGGBFKNKEAH_o *)0x0) &&
           (MOJLFMJLBDH = (UnityEngine_Purchasing_Product_array *)
                          (*(pDVar1->klass->vtable)._10_NMGFAJBFPNI.methodPtr)
                                    (pDVar1,(pDVar1->klass->vtable)._10_NMGFAJBFPNI.method),
           __this_01 != (GHOPMMBKGMB_o *)0x0)) {
          GHOPMMBKGMB__PPLCJLAAALH(__this_01,MOJLFMJLBDH,(MethodInfo *)0x0);
          PNHGEFAOFFE__OOFKMPOACEI(__this_00,method_00);
          return false;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppIVar3 = &(__this->fields).__2__current;
  *ppIVar3 = (Il2CppObject *)0x0;
  thunk_FUN_01c20e04(ppIVar3,0);
  (__this->fields).__1__state = 1;
  return true;
}

