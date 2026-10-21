// KHDLKDNHNFG$$FCDFBLNKLNN @ RVA 0x34D49A0

void KHDLKDNHNFG__FCDFBLNKLNN(KHDLKDNHNFG_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Xml_XmlNode_o *pSVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  
  if ((DAT_045686cd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    DAT_045686cd = 1;
  }
  pSVar2 = (__this->fields).BGCEELKLNFP;
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields)._OLIGHNIEIGK_k__BackingField;
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035d4a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar1->klass->vtable)._49_RemoveAll.methodPtr)
                (pSVar1,(pSVar1->klass->vtable)._49_RemoveAll.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

