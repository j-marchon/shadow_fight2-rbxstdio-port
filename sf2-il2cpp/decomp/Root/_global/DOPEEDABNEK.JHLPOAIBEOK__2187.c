// TypeDefIndex 2187
// Namespace: 
// [CompilerGenerated]
// private sealed class DOPEEDABNEK.JHLPOAIBEOK
// Fields:
//   public string lockName; // 0x10

// ===== internal bool EHDGLHILILF(HOOAAGABMBL item)  [RVA 0x32E5088]
// DOPEEDABNEK.JHLPOAIBEOK$$EHDGLHILILF @ RVA 0x32E5088

bool DOPEEDABNEK_JHLPOAIBEOK__EHDGLHILILF
               (DOPEEDABNEK_JHLPOAIBEOK_o *__this,HOOAAGABMBL_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (item == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (((item->fields)._ILHGDFFOGHP_k__BackingField != false) &&
     ((item->fields).BDGHEBINKCB != false)) {
    bVar1 = System_String__op_Equality
                      ((item->fields)._ILMMODKJGFK_k__BackingField,(__this->fields).lockName,
                       (MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public void .ctor()  [RVA 0x32DF044]
// DOPEEDABNEK.JHLPOAIBEOK$$.ctor @ RVA 0x32DF044

void DOPEEDABNEK_JHLPOAIBEOK___ctor(DOPEEDABNEK_JHLPOAIBEOK_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

