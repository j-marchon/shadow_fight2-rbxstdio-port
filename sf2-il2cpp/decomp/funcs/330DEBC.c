// GIAMPEGMNHE$$NANCFCIGNEE @ RVA 0x330DEBC

int32_t GIAMPEGMNHE__NANCFCIGNEE
                  (System_Xml_XmlAttribute_o *LBJNDMNEJJB,int32_t HBFDLMOKDGA,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_String_o *pSVar3;
  int32_t local_14;
  
  local_14 = 0;
  iVar1 = HBFDLMOKDGA;
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
    pSVar3 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    pSVar3 = PCOEHCPGBBG__JLLDNFPOKND(pSVar3,(MethodInfo *)0x0);
    bVar2 = System_Int32__TryParse(pSVar3,&local_14,(MethodInfo *)0x0);
    iVar1 = local_14;
    if (!bVar2) {
      iVar1 = HBFDLMOKDGA;
    }
  }
  return iVar1;
}

