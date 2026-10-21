// KHLGHHMCKAE$$HNIHOIAMDPC @ RVA 0x325CEA8

void KHLGHHMCKAE__HNIHOIAMDPC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  long *plVar1;
  GECKDIFJFDH_o *__this;
  System_String_o *DIHAKADKIKM;
  float fVar2;
  
  if ((DAT_04567195 & 1) == 0) {
    FUN_01bab630(&DMGOIPBMOJI_TypeInfo);
    FUN_01bab630(&GECKDIFJFDH_TypeInfo);
    FUN_01bab630(&KHLGHHMCKAE_TypeInfo);
    FUN_01bab630(&StringLiteral_11978);
    FUN_01bab630(&StringLiteral_13776);
    FUN_01bab630(&StringLiteral_10356);
    FUN_01bab630(&StringLiteral_10355);
    FUN_01bab630(&StringLiteral_8787);
    FUN_01bab630(&StringLiteral_11715);
    FUN_01bab630(&StringLiteral_11429);
    FUN_01bab630(&StringLiteral_6203);
    FUN_01bab630(&StringLiteral_10474);
    FUN_01bab630(&StringLiteral_11714);
    DAT_04567195 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_11978,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    __this = (GECKDIFJFDH_o *)thunk_FUN_01bda818(GECKDIFJFDH_TypeInfo);
    GECKDIFJFDH___ctor(__this,(MethodInfo *)0x0);
    if (plVar1 != (long *)0x0) {
      DIHAKADKIKM = (System_String_o *)
                    (**(code **)(*plVar1 + 0x548))
                              (plVar1,StringLiteral_13776,*(undefined8 *)(*plVar1 + 0x550));
      fVar2 = PCOEHCPGBBG__OFFODGKLGOP(DIHAKADKIKM,0.0,(MethodInfo *)0x0);
      if (__this != (GECKDIFJFDH_o *)0x0) {
        (__this->fields).JAODINPKJLN = fVar2;
        FUN_03f93638(&StringLiteral_10355);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

