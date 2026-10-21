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

