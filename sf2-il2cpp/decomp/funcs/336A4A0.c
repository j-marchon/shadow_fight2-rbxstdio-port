// MDFGJKBMECA$$HNIHOIAMDPC @ RVA 0x336A4A0

void MDFGJKBMECA__HNIHOIAMDPC
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlDocument_o *LKILNGEECIJ,
               System_String_o *GAKKFJBNLFK,MethodInfo *method)

{
  System_Xml_XmlNode_o *LKILNGEECIJ_00;
  MethodInfo *method_00;
  
  if ((DAT_04567ad9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&StringLiteral_9550);
    FUN_01bab630(&StringLiteral_4191);
    FUN_01bab630(&StringLiteral_13921);
    FUN_01bab630(&StringLiteral_5629);
    FUN_01bab630(&StringLiteral_11719);
    DAT_04567ad9 = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    method_00 = (LKILNGEECIJ->klass->vtable)._51_get_Item.method;
    LKILNGEECIJ_00 =
         (System_Xml_XmlNode_o *)
         (*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)(LKILNGEECIJ,StringLiteral_11719);
    if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MDFGJKBMECA_TypeInfo);
    }
    MDFGJKBMECA__ABCNILIJHCG(BCKBBGCOMJD,LKILNGEECIJ_00,method_00);
    if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MDFGJKBMECA__NHFNCHCKIJJ(BCKBBGCOMJD,LKILNGEECIJ_00,GAKKFJBNLFK,method);
    if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MDFGJKBMECA__OCIOEHCIKOK(BCKBBGCOMJD,LKILNGEECIJ_00,(MethodInfo *)GAKKFJBNLFK);
    if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MDFGJKBMECA__LDALHGPNFFL(BCKBBGCOMJD,LKILNGEECIJ_00,(MethodInfo *)GAKKFJBNLFK);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

