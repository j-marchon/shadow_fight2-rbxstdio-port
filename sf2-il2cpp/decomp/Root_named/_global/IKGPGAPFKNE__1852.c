// TypeDefIndex 1852
// Namespace: 
// public sealed class IKGPGAPFKNE : KFHIPIPCOHK
// Fields:
//   private const float EEEOPMBINFJ = 0.5;
//   private readonly List<BECIPDJBAOG> FCKCGNHILFE; // 0x18
//   private readonly string GMILEGDKKPL; // 0x20
//   private float CEONKIEGMEB; // 0x28

// ===== public void .ctor(string LFKENPEPPAL, List<BECIPDJBAOG> KJADEEFANAL)  [RVA 0x32478BC]
// IKGPGAPFKNE$$.ctor @ RVA 0x32478BC

void IKGPGAPFKNE___ctor(IKGPGAPFKNE_o *__this,System_String_o *LFKENPEPPAL,
                       System_Collections_Generic_List_BECIPDJBAOG__o *KJADEEFANAL,
                       MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Collections_Generic_List_BECIPDJBAOG__o **ppSVar2;
  
  KFHIPIPCOHK___ctor((KFHIPIPCOHK_o *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).GMILEGDKKPL;
  *ppSVar1 = LFKENPEPPAL;
  thunk_FUN_01c20e04(ppSVar1,LFKENPEPPAL);
  ppSVar2 = &(__this->fields).FCKCGNHILFE;
  *ppSVar2 = KJADEEFANAL;
  thunk_FUN_01c20e04(ppSVar2,KJADEEFANAL);
  return;
}


// ===== protected override void HJKJNLIKHMM()  [RVA 0x3247900]
// IKGPGAPFKNE$$HJKJNLIKHMM @ RVA 0x3247900

void IKGPGAPFKNE__HJKJNLIKHMM(IKGPGAPFKNE_o *__this,MethodInfo *method)

{
  RaidPaymentService_o *__this_00;
  System_Action_BKKPAKHJDKB__o *BPCGDKENMAE;
  MethodInfo *extraout_x1;
  System_String_o *LFKENPEPPAL;
  
  if ((DAT_045670cf & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_IKGPGAPFKNE_MCHLPIHDPDJ__);
    DAT_045670cf = 1;
    method = extraout_x1;
  }
  (__this->fields).CEONKIEGMEB = 3.4028235e+38;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
  LFKENPEPPAL = (__this->fields).GMILEGDKKPL;
  BPCGDKENMAE = (System_Action_BKKPAKHJDKB__o *)
                thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (RaidPaymentService_o *)0x0) {
    RaidPaymentService__OCPFALFDBOL(__this_00,LFKENPEPPAL,BPCGDKENMAE,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MCHLPIHDPDJ(BKKPAKHJDKB MEJOGHDACNG)  [RVA 0x32479D4]
// IKGPGAPFKNE$$MCHLPIHDPDJ @ RVA 0x32479D4

void IKGPGAPFKNE__MCHLPIHDPDJ(IKGPGAPFKNE_o *__this,BKKPAKHJDKB_o *MEJOGHDACNG,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *message;
  DialogsManager_o *__this_00;
  System_Collections_Generic_List_BECIPDJBAOG__o *__this_01;
  BECIPDJBAOG_o *item;
  BECIPDJBAOG_array *pBVar3;
  
  if ((DAT_045670d0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BECIPDJBAOG>_Add__);
    FUN_01bab630(&StringLiteral_15466/*"[Failure]: {0}"*/);
    DAT_045670d0 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<BECIPDJBAOG>_Add__;
  if (MEJOGHDACNG != (BKKPAKHJDKB_o *)0x0) {
    if ((MEJOGHDACNG->fields).HHJIJKJCEOF == 0) {
      __this_01 = (__this->fields).FCKCGNHILFE;
      if (__this_01 != (System_Collections_Generic_List_BECIPDJBAOG__o *)0x0) {
        item = (MEJOGHDACNG->fields).EBJBJCPBFLE;
        pBVar3 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pBVar3 != (BECIPDJBAOG_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pBVar3->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pBVar3->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04(pBVar3->m_Items + (int)uVar1);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          (__this->fields).CEONKIEGMEB = 0.5;
          return;
        }
      }
    }
    else {
      message = System_String__Format
                          (StringLiteral_15466/*"[Failure]: {0}"*/,(Il2CppObject *)MEJOGHDACNG,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (DialogsManager_o *)0x0) {
        DialogsManager__DEAPPIKAHEP(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void PJEOKMGNMNF()  [RVA 0x3247B08]
// IKGPGAPFKNE$$PJEOKMGNMNF @ RVA 0x3247B08

void IKGPGAPFKNE__PJEOKMGNMNF(IKGPGAPFKNE_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((DAT_045670d1 & 1) == 0) {
    FUN_01bab630(&Method_KFHIPIPCOHK_KJKDAHGENPM<GCOLFANNEMF>__);
    DAT_045670d1 = 1;
  }
  fVar2 = (__this->fields).CEONKIEGMEB;
  if (0.0 < fVar2) {
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).CEONKIEGMEB = fVar2 - fVar1;
    return;
  }
  KFHIPIPCOHK__KJKDAHGENPM<object>
            ((KFHIPIPCOHK_o *)__this,Method_KFHIPIPCOHK_KJKDAHGENPM<GCOLFANNEMF>__);
  return;
}

