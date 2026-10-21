// CGALNIOABHK$$COCMBLDPDIM @ RVA 0x3444230

ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *
CGALNIOABHK__COCMBLDPDIM(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *__this;
  undefined8 uVar2;
  PNGKLCHKPEO_o *pPVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456823a & 1) == 0) {
    FUN_01bab630(&ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_TypeInfo);
    FUN_01bab630(&StringLiteral_13833);
    FUN_01bab630(&StringLiteral_6609);
    FUN_01bab630(&StringLiteral_7357);
    DAT_0456823a = 1;
    method = extraout_x1;
  }
  __this = (ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *)
           thunk_FUN_01bda818(ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_TypeInfo,method);
  ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA___ctor(__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    uVar2 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                      (AHDGNOJPPIB,StringLiteral_6609,
                       (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if ((__this != (ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) &&
       (pPVar3 = (__this->fields).DBNCGNGNGNM, pPVar3 != (PNGKLCHKPEO_o *)0x0)) {
      (*(pPVar3->klass->vtable)._4_EOHMFJFFFIN.methodPtr)
                (pPVar3,uVar2,(pPVar3->klass->vtable)._4_EOHMFJFFFIN.method);
      uVar2 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                        (AHDGNOJPPIB,StringLiteral_13833,
                         (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      pPVar3 = (__this->fields).OCNJNIOMPMJ;
      if (pPVar3 != (PNGKLCHKPEO_o *)0x0) {
        (*(pPVar3->klass->vtable)._4_EOHMFJFFFIN.methodPtr)
                  (pPVar3,uVar2,(pPVar3->klass->vtable)._4_EOHMFJFFFIN.method);
        AHDGNOJPPIB_00 =
             (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_7357,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        iVar1 = ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA__HMCBPDICONH(AHDGNOJPPIB_00,(MethodInfo *)0x0);
        (__this->fields).GDPIIGNJCLE = iVar1;
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

