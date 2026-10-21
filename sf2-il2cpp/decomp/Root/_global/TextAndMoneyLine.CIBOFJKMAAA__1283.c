// TypeDefIndex 1283
// Namespace: 
// [CompilerGenerated]
// private sealed class TextAndMoneyLine.CIBOFJKMAAA
// Fields:
//   public TextAndMoneyLine <>4__this; // 0x10
//   public NumberFormatInfo f; // 0x18

// ===== public void .ctor()  [RVA 0x3150670]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine.CIBOFJKMAAA$$.ctor @ RVA 0x3150670

void Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA___ctor
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void NCOHGDFHGHK()  [RVA 0x3150FEC]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine.CIBOFJKMAAA$$NCOHGDFHGHK @ RVA 0x3150FEC

void Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA__NCOHGDFHGHK
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *pNVar1;
  
  pNVar1 = (__this->fields).__4__this;
  if ((pNVar1 != (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *)0x0) &&
     (__this_00 = (pNVar1->fields).JLKPBAGACID, __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
     ) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void JFODEOJOHGB(long x)  [RVA 0x3151010]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine.CIBOFJKMAAA$$JFODEOJOHGB @ RVA 0x3151010

void Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA__JFODEOJOHGB
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_o *__this,int64_t x,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *pNVar1;
  System_Func_long__string__o *pSVar2;
  Nekki_SF2_GUI_Fight_IconAndText_o *__this_00;
  
  pNVar1 = (__this->fields).__4__this;
  if (pNVar1 != (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *)0x0) {
    pSVar2 = (pNVar1->fields).BHBICCNLODE;
    (pNVar1->fields).PGGDJIGFIHK = x;
    if (pSVar2 != (System_Func_long__string__o *)0x0) {
      __this_00 = (pNVar1->fields).moneyCount;
      CJNHFNHJHPE = (System_String_o *)
                    (*(code *)(pSVar2->fields).super.super.invoke_impl)
                              ((pSVar2->fields).super.super.method_code,x,
                               (pSVar2->fields).super.super.method);
      if (__this_00 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
        Nekki_SF2_GUI_Fight_IconAndText__SetText(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal long DKFLJLGIHMF()  [RVA 0x3151058]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine.CIBOFJKMAAA$$DKFLJLGIHMF @ RVA 0x3151058

int64_t Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA__DKFLJLGIHMF
                  (Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *pNVar1;
  
  pNVar1 = (__this->fields).__4__this;
  if (pNVar1 != (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *)0x0) {
    return (pNVar1->fields).BJGBAECJNAD;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void COHHMJJFAAD(long x)  [RVA 0x3151074]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine.CIBOFJKMAAA$$COHHMJJFAAD @ RVA 0x3151074

void Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA__COHHMJJFAAD
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_o *__this,int64_t x,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *pNVar1;
  int64_t *__this_00;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Fight_IconAndText_o *__this_01;
  
  if ((DAT_04566809 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9281/*"N0"*/);
    DAT_04566809 = 1;
  }
  pNVar1 = (__this->fields).__4__this;
  if (pNVar1 != (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *)0x0) {
    __this_00 = &(pNVar1->fields).BJGBAECJNAD;
    *__this_00 = x;
    __this_01 = (pNVar1->fields).rubyCount;
    CJNHFNHJHPE = System_Int64__ToString
                            ((int64_t)__this_00,StringLiteral_9281/*"N0"*/,
                             (System_IFormatProvider_o *)(__this->fields).f,(MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
      Nekki_SF2_GUI_Fight_IconAndText__SetText(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal long FBJDHDNHOAC()  [RVA 0x31510EC]
// Nekki.SF2.GUI.Fight.TextAndMoneyLine.CIBOFJKMAAA$$FBJDHDNHOAC @ RVA 0x31510EC

int64_t Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA__FBJDHDNHOAC
                  (Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *pNVar1;
  
  pNVar1 = (__this->fields).__4__this;
  if (pNVar1 != (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *)0x0) {
    return (pNVar1->fields).PGGDJIGFIHK;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

