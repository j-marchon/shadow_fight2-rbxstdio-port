// LPAPAMPGDFN$$CBALBLBOEJC @ RVA 0x347B394

void LPAPAMPGDFN__CBALBLBOEJC(LPAPAMPGDFN_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  ACHLOMELAJE_o *__this_00;
  System_String_o **ppSVar3;
  
  if ((DAT_0456834c & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456834c = 1;
  }
  ppSVar3 = &(__this->fields).HEADCHPANBF;
  bVar1 = System_String__op_Equality(*ppSVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
                    /* try { // try from 0357b3e8 to 0367b617 has its CatchHandler @ 0357b3e8
                       catch() { ... } // from try @ 0357b3e8 with catch @ 0357b3e8
                       catch() { ... } // from try @ 0357b86c with catch @ 0357b3e8
                       catch() { ... } // from try @ 0357b910 with catch @ 0357b3e8
                       catch() { ... } // from try @ 0357b918 with catch @ 0357b3e8
                       catch() { ... } // from try @ 0357ba14 with catch @ 0357b3e8 */
  (__this->fields).HEADCHPANBF = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar3,CJNHFNHJHPE);
  pSVar2 = (__this->fields).ALNEACNLPDH;
  if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
    (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
              (pSVar2,*ppSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

