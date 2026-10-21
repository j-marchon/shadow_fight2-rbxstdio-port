// ANFOHCGLHID$$LJMKLOBKBNH @ RVA 0x34E109C

void ANFOHCGLHID__LJMKLOBKBNH(MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  long *plVar2;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  FOKJBDHLIMG_o *__this;
  
  if ((DAT_0456872f & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_10511);
    FUN_01bab630(&StringLiteral_4278);
    FUN_01bab630(&StringLiteral_10239);
    DAT_0456872f = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_4278,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar1 != (System_Xml_XmlDocument_o *)0x0) {
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_10511,
                                (pSVar1->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                    (**(code **)(*plVar2 + 0x468))
                              (plVar2,StringLiteral_10239,*(undefined8 *)(*plVar2 + 0x470));
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      __this = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
      if (__this != (FOKJBDHLIMG_o *)0x0) {
        FOKJBDHLIMG__FBKGMIENPFK(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

