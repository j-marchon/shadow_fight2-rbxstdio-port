// GIAMPEGMNHE$$KCCCDOBCCNN @ RVA 0x330D084

int64_t GIAMPEGMNHE__KCCCDOBCCNN
                  (System_Xml_XmlAttribute_o *LBJNDMNEJJB,int64_t HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int64_t iVar3;
  int64_t local_18;
  
  local_18 = 0;
  iVar3 = HBFDLMOKDGA;
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 0340d098 to 0350d09f has its CatchHandler @ 0340d198 */
    pSVar2 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
                    /* try { // try from 0340d0a4 to 0350d0ab has its CatchHandler @ 0340d190 */
    pSVar2 = PCOEHCPGBBG__JLLDNFPOKND(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_Int64__TryParse(pSVar2,&local_18,(MethodInfo *)0x0);
    iVar3 = local_18;
                    /* try { // try from 0340d0bc to 0350d0c3 has its CatchHandler @ 0340d194 */
    if (!bVar1) {
      iVar3 = HBFDLMOKDGA;
    }
  }
                    /* try { // try from 0340d0c4 to 0350d0d7 has its CatchHandler @ 0340d180 */
  return iVar3;
}

