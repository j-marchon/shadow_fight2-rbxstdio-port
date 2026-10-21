// GIAMPEGMNHE$$FOKFAIPDIMB @ RVA 0x330C73C

float GIAMPEGMNHE__FOKFAIPDIMB
                (System_Xml_XmlAttribute_o *LBJNDMNEJJB,float HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *ODAMFBHJKIH;
  float fVar2;
  float local_24;
  
  if ((DAT_0456778c & 1) == 0) {
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_0456778c = 1;
  }
  local_24 = 0.0;
  fVar2 = HBFDLMOKDGA;
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
    ODAMFBHJKIH = (System_String_o *)
                  (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                            (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PNPPAHHCBOM_TypeInfo);
    }
    bVar1 = PNPPAHHCBOM__MEEKIFOGCCL(ODAMFBHJKIH,&local_24,(MethodInfo *)0x0);
    fVar2 = local_24;
    if (!bVar1) {
      fVar2 = HBFDLMOKDGA;
    }
  }
  return fVar2;
}

