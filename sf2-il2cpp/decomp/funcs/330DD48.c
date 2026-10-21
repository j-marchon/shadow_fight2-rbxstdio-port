// GIAMPEGMNHE$$JIONICBNBJE @ RVA 0x330DD48

uint32_t GIAMPEGMNHE__JIONICBNBJE
                   (System_Xml_XmlAttribute_o *LBJNDMNEJJB,uint32_t HBFDLMOKDGA,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  uint32_t local_14;
  
  local_14 = 0;
  uVar1 = HBFDLMOKDGA;
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
    pSVar3 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    pSVar3 = PCOEHCPGBBG__JLLDNFPOKND(pSVar3,(MethodInfo *)0x0);
    bVar2 = System_UInt32__TryParse(pSVar3,&local_14,(MethodInfo *)0x0);
    uVar1 = local_14;
    if (!bVar2) {
      uVar1 = HBFDLMOKDGA;
    }
  }
  return uVar1;
}

