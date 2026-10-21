// TypeDefIndex 1426
// Namespace: 
// [CompilerGenerated]
// private sealed class PNHGEFAOFFE.CKJPKMDDPDA : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public PNHGEFAOFFE <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x317FBBC]
// PNHGEFAOFFE.CKJPKMDDPDA$$.ctor @ RVA 0x317FBBC

void PNHGEFAOFFE_CKJPKMDDPDA___ctor
               (PNHGEFAOFFE_CKJPKMDDPDA_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3183454]
// PNHGEFAOFFE.CKJPKMDDPDA$$System.IDisposable.Dispose @ RVA 0x3183454

void PNHGEFAOFFE_CKJPKMDDPDA__System_IDisposable_Dispose
               (PNHGEFAOFFE_CKJPKMDDPDA_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3183458]
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


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x31836C4]
// PNHGEFAOFFE.CKJPKMDDPDA$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x31836C4

Il2CppObject *
PNHGEFAOFFE_CKJPKMDDPDA__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (PNHGEFAOFFE_CKJPKMDDPDA_o *__this,MethodInfo *method)

{
                    /* try { // try from 032836c8 to 033836ef has its CatchHandler @ 03283818 */
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x31836CC]
// PNHGEFAOFFE.CKJPKMDDPDA$$System.Collections.IEnumerator.Reset @ RVA 0x31836CC

void PNHGEFAOFFE_CKJPKMDDPDA__System_Collections_IEnumerator_Reset
               (PNHGEFAOFFE_CKJPKMDDPDA_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_PNHGEFAOFFE_CKJPKMDDPDA_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3183704]
// PNHGEFAOFFE.CKJPKMDDPDA$$System.Collections.IEnumerator.get_Current @ RVA 0x3183704

Il2CppObject *
PNHGEFAOFFE_CKJPKMDDPDA__System_Collections_IEnumerator_get_Current
          (PNHGEFAOFFE_CKJPKMDDPDA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

