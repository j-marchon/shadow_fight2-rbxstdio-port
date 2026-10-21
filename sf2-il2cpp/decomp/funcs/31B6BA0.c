// Nekki.SF2.GUI.Dialogs.EnchantDialog$$Init @ RVA 0x31B6BA0

void Nekki_SF2_GUI_Dialogs_EnchantDialog__Init
               (Nekki_SF2_GUI_Dialogs_EnchantDialog_o *__this,Il2CppObject *OCMMDIHLKMH,
               MethodInfo *method)

{
  byte bVar1;
  KHEFDKCCDJL_c *pKVar2;
  uint uVar3;
  ulong uVar4;
  System_Action_T__o *IELDNEAAPBE;
  KHEFDKCCDJL_o *pKVar5;
  undefined8 *puVar6;
  
  if ((DAT_04566bb9 & 1) == 0) {
    FUN_01bab630(&KHEFDKCCDJL_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_17841);
    FUN_01bab630(&StringLiteral_17783);
    FUN_01bab630(&StringLiteral_16812);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_17784);
    FUN_01bab630(&StringLiteral_17782);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566bb9 = 1;
  }
  pKVar2 = KHEFDKCCDJL_TypeInfo;
  if (OCMMDIHLKMH == (Il2CppObject *)0x0) {
    (__this->fields).KDAABAPIIEP = (KHEFDKCCDJL_o *)0x0;
  }
  else {
    bVar1 = (KHEFDKCCDJL_TypeInfo->_2).naturalAligment;
    if (((OCMMDIHLKMH->klass->_2).naturalAligment < bVar1) ||
       ((OCMMDIHLKMH->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)KHEFDKCCDJL_TypeInfo)) {
LAB_032b6c9c:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(OCMMDIHLKMH);
    }
    (__this->fields).KDAABAPIIEP = (KHEFDKCCDJL_o *)OCMMDIHLKMH;
    if (((OCMMDIHLKMH->klass->_2).naturalAligment < bVar1) ||
       ((OCMMDIHLKMH->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pKVar2))
    goto LAB_032b6c9c;
  }
  uVar4 = thunk_FUN_01c20e04(&(__this->fields).KDAABAPIIEP,OCMMDIHLKMH);
  pKVar5 = (__this->fields).KDAABAPIIEP;
  (__this->fields).super.JOLPNMNNKCJ = 3;
  if (pKVar5 == (KHEFDKCCDJL_o *)0x0) {
LAB_032b6de0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(uVar4);
  }
  IELDNEAAPBE = (System_Action_T__o *)(pKVar5->fields)._BDCJLOEJNHG_k__BackingField;
  if (IELDNEAAPBE != (System_Action_T__o *)0x0) {
    uVar3 = Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                      ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,IELDNEAAPBE,
                       Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    uVar4 = (ulong)uVar3;
    pKVar5 = (__this->fields).KDAABAPIIEP;
    if (pKVar5 == (KHEFDKCCDJL_o *)0x0) goto LAB_032b6de0;
  }
  switch((pKVar5->fields)._DBAIMLJAACL_k__BackingField) {
  case 0:
    (__this->fields).IOJDMGDLFNO = StringLiteral_17784;
    thunk_FUN_01c20e04();
    puVar6 = &StringLiteral_1;
    break;
  case 1:
    (__this->fields).IOJDMGDLFNO = StringLiteral_17850;
    thunk_FUN_01c20e04();
    puVar6 = &StringLiteral_17782;
    break;
  case 2:
    (__this->fields).IOJDMGDLFNO = StringLiteral_17850;
    thunk_FUN_01c20e04();
    puVar6 = &StringLiteral_17841;
    break;
  case 3:
    (__this->fields).IOJDMGDLFNO = StringLiteral_17850;
    thunk_FUN_01c20e04();
    puVar6 = &StringLiteral_17783;
    break;
  default:
    goto switchD_032b6d1c_default;
  }
  (__this->fields).KIIGHNODEJL = (System_String_o *)*puVar6;
  thunk_FUN_01c20e04();
switchD_032b6d1c_default:
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(__this->fields).IOJDMGDLFNO,
             StringLiteral_16812,StringLiteral_3640,(__this->fields).super.JOLPNMNNKCJ,
             (MethodInfo *)0x0);
  return;
}

