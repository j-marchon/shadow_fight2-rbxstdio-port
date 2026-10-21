// CAJHCLGOFMJ$$GEEFPKCAMNE @ RVA 0x318500C

void CAJHCLGOFMJ__GEEFPKCAMNE(CAJHCLGOFMJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Xml_XmlNode_o *pSVar1;
  
  if ((DAT_045669d4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
    DAT_045669d4 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_int>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
    pSVar1 = (__this->fields).HJKLIDCAEOE;
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0328506c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar1->klass->vtable)._49_RemoveAll.methodPtr)
                (pSVar1,(pSVar1->klass->vtable)._49_RemoveAll.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

