// IGFGDDANEPE$$PICGGLNNJFA @ RVA 0x30A352C

void IGFGDDANEPE__PICGGLNNJFA(IGFGDDANEPE_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool HFJDDNBBENI;
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  int32_t local_24;
  
                    /* try { // try from 031a3534 to 032a3543 has its CatchHandler @ 031a3570 */
                    /* try { // try from 031a3544 to 032a3567 has its CatchHandler @ 031a3478 */
  local_24 = CJNHFNHJHPE;
  if ((DAT_04566159 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 031a3568 to 032a356b has its CatchHandler @ 031a356c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3568 with catch @ 031a356c
                       try { // try from 031a356c to 032a358b has its CatchHandler @ 031a3478 */
    FUN_01bab630(&StringLiteral_4824);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3534 with catch @ 031a3570
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3514 with catch @ 031a3574
                        */
    DAT_04566159 = 1;
  }
  CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).MLEHIIGFDKM;
                    /* try { // try from 031a358c to 032a358f has its CatchHandler @ 031a35b0 */
  (__this->fields).DHPCMDOLAHE.fields = CVar5;
                    /* try { // try from 031a3590 to 032a35b7 has its CatchHandler @ 031a3478 */
  HFJDDNBBENI = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031a358c with catch @ 031a35b0 */
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
                    /* try { // try from 031a35b8 to 032a35bf has its CatchHandler @ 031a35d4 */
                    /* try { // try from 031a35c0 to 032a35cb has its CatchHandler @ 031a3478 */
  MGNPHCAAEIO__NOIIBMIKOHL(__this,HFJDDNBBENI,(MethodInfo *)0x0);
  if ((__this->fields).MMNCAIGLMJB == false) {
    return;
  }
                    /* try { // try from 031a35cc to 032a35d3 has its CatchHandler @ 031a35d4 */
  pSVar1 = (__this->fields).DMLGJFCNNJF;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a35b8 with catch @ 031a35d4
                       catch(type#2 @ 00000000) { ... } // from try @ 031a35cc with catch @ 031a35d4
                        */
                    /* try { // try from 031a35d8 to 032a3673 has its CatchHandler @ 031a35d8
                       catch() { ... } // from try @ 031a35d8 with catch @ 031a35d8
                       catch() { ... } // from try @ 031a36a4 with catch @ 031a35d8
                       catch() { ... } // from try @ 031a36cc with catch @ 031a35d8
                       catch() { ... } // from try @ 031a36f0 with catch @ 031a35d8
                       catch() { ... } // from try @ 031a3720 with catch @ 031a35d8 */
  if ((pSVar1 != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_4824,(MethodInfo *)0x0);
    if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__HBGAGFJBGKD((__this->fields).DMLGJFCNNJF,StringLiteral_4824,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).DMLGJFCNNJF;
    if ((pSVar1 != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method),
       pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_4824,(MethodInfo *)0x0);
      pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar3,pSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

