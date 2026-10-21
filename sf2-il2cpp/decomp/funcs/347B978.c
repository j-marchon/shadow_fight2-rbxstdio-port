// LPAPAMPGDFN$$MKACHLMIINH @ RVA 0x347B978

void LPAPAMPGDFN__MKACHLMIINH(LPAPAMPGDFN_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  ACHLOMELAJE_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  int32_t *piVar3;
  
                    /* catch() { ... } // from try @ 0357b67c with catch @ 0357b978 */
                    /* catch() { ... } // from try @ 0357b618 with catch @ 0357b97c */
                    /* catch() { ... } // from try @ 0357b908 with catch @ 0357b980 */
                    /* catch() { ... } // from try @ 0357b6b4 with catch @ 0357b984 */
  if ((DAT_0456834f & 1) == 0) {
                    /* try { // try from 0357b99c to 0367b99f has its CatchHandler @ 0357b9ac */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456834f = 1;
  }
  piVar3 = &(__this->fields).AHLHMBIFONA;
  *piVar3 = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 0357b99c with catch @ 0357b9ac */
  pSVar2 = (__this->fields).OPFLPGECHDE;
  pSVar1 = System_Int32__ToString((int32_t)piVar3,(MethodInfo *)0x0);
  if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
    (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
              (pSVar2,pSVar1,(pSVar2->klass->vtable)._10_set_Value.method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0357b9ec to 0367ba13 has its CatchHandler @ 0357ba28 */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 0357ba14 to 0367ba1f has its CatchHandler @ 0357b3e8 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0357ba20 to 0367ba27 has its CatchHandler @ 0357ba28 */
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 0357b9ec with catch @ 0357ba28
                       catch() { ... } // from try @ 0357ba20 with catch @ 0357ba28 */
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

