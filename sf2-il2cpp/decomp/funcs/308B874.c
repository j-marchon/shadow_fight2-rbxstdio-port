// IEFEBEDLHNN$$ToString @ RVA 0x308B874

System_String_o * IEFEBEDLHNN__ToString(IEFEBEDLHNN_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566059 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9175);
    DAT_04566059 = 1;
  }
  pSVar1 = System_String__Format
                     (StringLiteral_9175,(Il2CppObject *)(__this->fields).NPFMOEOIEKM,
                      (Il2CppObject *)(__this->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
  return pSVar1;
}

