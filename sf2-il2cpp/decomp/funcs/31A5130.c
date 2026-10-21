// PDFMAHPKIEI$$BHFGGAKKJKP @ RVA 0x31A5130

void PDFMAHPKIEI__BHFGGAKKJKP(PDFMAHPKIEI_o *__this,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  undefined8 uVar2;
  System_Byte_array *MMEEMFOLKPP;
  System_Xml_XmlDocument_o *pSVar3;
  System_String_o *EIJDDKJONFO;
  
  if ((DAT_04566afe & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    DAT_04566afe = 1;
  }
  if ((__this->fields).JOBALMMDPAF != false) {
    pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                    /* try { // try from 032a517c to 033a51a3 has its CatchHandler @ 032a5d7c */
    pSVar3 = (__this->fields).KGCDBPOBGFH;
    if ((pSVar3 != (System_Xml_XmlDocument_o *)0x0) &&
       (uVar2 = (*(pSVar3->klass->vtable)._43_get_OuterXml.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable)._43_get_OuterXml.method),
       pSVar1 != (System_Text_Encoding_o *)0x0)) {
      MMEEMFOLKPP = (System_Byte_array *)
                    (*(pSVar1->klass->vtable)._19_GetBytes.methodPtr)
                              (pSVar1,uVar2,(pSVar1->klass->vtable)._19_GetBytes.method);
      if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032a51d8 to 033a5203 has its CatchHandler @ 032a5d78 */
        thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo);
      }
      EGFFLEKJFGN__BJDAKJJGDLE(MMEEMFOLKPP,(MethodInfo *)0x0);
      NEHNBJKKABI__HEPJLJJMBML((__this->fields).MKKHHBEFNDL,MMEEMFOLKPP,(MethodInfo *)0x0);
      EIJDDKJONFO = (__this->fields).MKKHHBEFNDL;
      if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CFJANHACGMG__GCBGEBGFNHI(EIJDDKJONFO,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032a523c to 033a5247 has its CatchHandler @ 032a5d70 */
    FUN_01bab8c8();
  }
  return;
}

