// GIAMPEGMNHE$$FAEBPLENEGK @ RVA 0x330DC6C

bool GIAMPEGMNHE__FAEBPLENEGK
               (System_Xml_XmlAttribute_o *LBJNDMNEJJB,bool HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t local_28;
  bool local_24 [4];
  
  if ((DAT_0456779a & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_0456779a = 1;
  }
  local_24[0] = false;
  local_28 = 0;
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo);
    }
    bVar1 = System_Boolean__TryParse(pSVar2,local_24,(MethodInfo *)0x0);
    if (bVar1) {
      HBFDLMOKDGA = local_24[0] != false;
    }
    else {
      pSVar2 = (System_String_o *)
               (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                         (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
      pSVar2 = PCOEHCPGBBG__JLLDNFPOKND(pSVar2,(MethodInfo *)0x0);
      bVar1 = System_Int32__TryParse(pSVar2,&local_28,(MethodInfo *)0x0);
      if (bVar1) {
        HBFDLMOKDGA = 0 < local_28;
      }
    }
  }
  return HBFDLMOKDGA;
}

