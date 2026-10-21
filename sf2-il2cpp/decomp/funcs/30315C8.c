// Nekki.SF2.GUI.Shop.ParameterScrollItem$$KFMNMGGDHFD @ RVA 0x30315C8

void Nekki_SF2_GUI_Shop_ParameterScrollItem__KFMNMGGDHFD
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t CJNHFNHJHPE,
               int32_t DPJIDNBJIBG,float PNEIGGOFIOA,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ParameterProgressBar_o *pNVar1;
  undefined4 uVar2;
  undefined4 in_register_00005004;
  
  uVar2 = (*(__this->klass->vtable)._53_NLFAIJPCCLI.methodPtr)
                    ((float)CJNHFNHJHPE,__this,(__this->klass->vtable)._53_NLFAIJPCCLI.method);
  pNVar1 = (__this->fields)._progressBar;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ParameterProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0313161c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._5_SetValue.methodPtr)
              (uVar2,CONCAT44(in_register_00005004,PNEIGGOFIOA),pNVar1,(ulong)(uint)DPJIDNBJIBG,
               (pNVar1->klass->vtable)._5_SetValue.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

