// MADFGOOGMDP$$HNIHOIAMDPC @ RVA 0x34A0340

void MADFGOOGMDP__HNIHOIAMDPC
               (MADFGOOGMDP_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlNode_o *IIBFFEPEHPF;
  undefined8 uVar1;
  undefined8 uVar2;
  LCKCDEKNLOA_o *pLVar3;
  
  if ((DAT_04568492 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_MADFGOOGMDP_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_4577);
    FUN_01bab630(&StringLiteral_13626);
    FUN_01bab630(&StringLiteral_10650);
    FUN_01bab630(&StringLiteral_5679);
    DAT_04568492 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if ((__this->fields).super._AFGEOOAHIGH_k__BackingField == (FPPKHNNABAD_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10650,(MethodInfo *)0x0);
  }
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    IIBFFEPEHPF = (System_Xml_XmlNode_o *)
                  (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                            (NPLGCIFGFOK,StringLiteral_4577,
                             (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
    FPPKHNNABAD__MLJDPILPJDE(IIBFFEPEHPF,(__this->fields).KDIMDBHMBEM,(MethodInfo *)0x0);
    uVar1 = (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                      (NPLGCIFGFOK,StringLiteral_13626,
                       (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
    pLVar3 = (__this->fields).EBLHLBLOFLM;
    uVar2 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    (*(__this->klass->vtable)._6_IEFEBMICIHN.methodPtr)
              (__this,uVar1,pLVar3,uVar2,(__this->klass->vtable)._6_IEFEBMICIHN.method);
    uVar1 = (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                      (NPLGCIFGFOK,StringLiteral_5679,
                       (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
    pLVar3 = (__this->fields).HLDPKMBOAPA;
    uVar2 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
                    /* WARNING: Could not recover jumptable at 0x035a0520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._6_IEFEBMICIHN.methodPtr)
              (__this,uVar1,pLVar3,uVar2,(__this->klass->vtable)._6_IEFEBMICIHN.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

