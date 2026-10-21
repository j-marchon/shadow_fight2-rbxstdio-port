// TypeDefIndex 1605
// Namespace: Nekki.SF2.GUI.Dialogs
// public class EnchantDialog : BaseDialog
// Fields:
//   private LabelAlias _ContentLabel; // 0xC8
//   private KHEFDKCCDJL KDAABAPIIEP; // 0xD0
//   private string IOJDMGDLFNO; // 0xD8
//   private string KIIGHNODEJL; // 0xE0

// ===== public override void Init(object OCMMDIHLKMH)  [RVA 0x31B6BA0]
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
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17841/*"dlgSuperEnchantmentMessageEnchanted"*/);
    FUN_01bab630(&StringLiteral_17783/*"dlgEnchantmentMessageOldItem"*/);
    FUN_01bab630(&StringLiteral_16812/*"btnEnchantment"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_17784/*"dlgEnchantmentTitle"*/);
    FUN_01bab630(&StringLiteral_17782/*"dlgEnchantmentMessageEnchanted"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
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
    (__this->fields).IOJDMGDLFNO = StringLiteral_17784/*"dlgEnchantmentTitle"*/;
    thunk_FUN_01c20e04();
    puVar6 = &StringLiteral_1/*""*/;
    break;
  case 1:
    (__this->fields).IOJDMGDLFNO = StringLiteral_17850/*"dlgWarning"*/;
    thunk_FUN_01c20e04();
    puVar6 = &StringLiteral_17782/*"dlgEnchantmentMessageEnchanted"*/;
    break;
  case 2:
    (__this->fields).IOJDMGDLFNO = StringLiteral_17850/*"dlgWarning"*/;
    thunk_FUN_01c20e04();
    puVar6 = &StringLiteral_17841/*"dlgSuperEnchantmentMessageEnchanted"*/;
    break;
  case 3:
    (__this->fields).IOJDMGDLFNO = StringLiteral_17850/*"dlgWarning"*/;
    thunk_FUN_01c20e04();
    puVar6 = &StringLiteral_17783/*"dlgEnchantmentMessageOldItem"*/;
    break;
  default:
    goto switchD_032b6d1c_default;
  }
  (__this->fields).KIIGHNODEJL = (System_String_o *)*puVar6;
  thunk_FUN_01c20e04();
switchD_032b6d1c_default:
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(__this->fields).IOJDMGDLFNO,
             StringLiteral_16812/*"btnEnchantment"*/,StringLiteral_3640/*"CANCEL"*/,(__this->fields).super.JOLPNMNNKCJ,
             (MethodInfo *)0x0);
  return;
}


// ===== private string NEHDMDOKPPH()  [RVA 0x31B6DE4]
// Nekki.SF2.GUI.Dialogs.EnchantDialog$$NEHDMDOKPPH @ RVA 0x31B6DE4

System_String_o *
Nekki_SF2_GUI_Dialogs_EnchantDialog__NEHDMDOKPPH
          (Nekki_SF2_GUI_Dialogs_EnchantDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  int32_t iVar3;
  System_Text_StringBuilder_o *__this_00;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  KHEFDKCCDJL_o *pKVar6;
  BFBONKPKBNL_o *pBVar7;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_01;
  int index;
  Il2CppObject *arg0;
  void *local_70;
  Il2CppClass *pIStack_68;
  
  if ((DAT_04566bba & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_2450/*"<quad name={0} usedsize=80 >{1}{2}"*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_2484/*"?"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566bba = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pKVar6 = (__this->fields).KDAABAPIIEP;
  if (((pKVar6 != (KHEFDKCCDJL_o *)0x0) &&
      (pBVar7 = (pKVar6->fields)._DGKHEMIDIFL_k__BackingField, pBVar7 != (BFBONKPKBNL_o *)0x0)) &&
     (__this_01 = (pBVar7->fields).MIOLFPIJMDH,
     __this_01 != (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0)) {
    iVar2 = (__this_01->fields)._size;
    if (0 < iVar2) {
      index = 0;
      do {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032b6fec;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                            &pIVar4[1].monitor,(MethodInfo *)0x0);
        if (0 < iVar3) {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index,
                              Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
          if ((pIVar4 == (Il2CppObject *)0x0) || (pIVar4[1].klass == (Il2CppClass *)0x0))
          goto LAB_032b6fec;
          arg0 = ((pIVar4[1].klass)->_1).byval_arg.data;
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index,
                              Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032b6fec;
          local_70 = pIVar4[1].monitor;
          pIStack_68 = pIVar4[2].klass;
          pIVar4 = (Il2CppObject *)
                   thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      &local_70);
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_032b6fec;
          puVar1 = &StringLiteral_167/*" "*/;
          if (iVar2 + -1 <= index) {
            puVar1 = &StringLiteral_1/*""*/;
          }
          System_Text_StringBuilder__AppendFormat
                    (__this_00,StringLiteral_2450/*"<quad name={0} usedsize=80 >{1}{2}"*/,arg0,pIVar4,(Il2CppObject *)*puVar1,
                     (MethodInfo *)0x0);
        }
        index = index + 1;
      } while (iVar2 != index);
    }
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      iVar3 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
      if (0 < iVar3) {
        System_Text_StringBuilder__Append(__this_00,StringLiteral_2484/*"?"*/,(MethodInfo *)0x0);
      }
      pSVar5 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      return pSVar5;
    }
  }
LAB_032b6fec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x31B6FF0]
// Nekki.SF2.GUI.Dialogs.EnchantDialog$$GKPJMHOFIOO @ RVA 0x31B6FF0

void Nekki_SF2_GUI_Dialogs_EnchantDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_EnchantDialog_o *__this,MethodInfo *method)

{
  FUN_03f93618(DAT_04566bbb);
  return;
}


// ===== protected override void GLANJNFACKI()  [RVA 0x31B7264]
// Nekki.SF2.GUI.Dialogs.EnchantDialog$$GLANJNFACKI @ RVA 0x31B7264

void Nekki_SF2_GUI_Dialogs_EnchantDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_EnchantDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x31B7268]
// Nekki.SF2.GUI.Dialogs.EnchantDialog$$GLJGIJNALCA @ RVA 0x31B7268

void Nekki_SF2_GUI_Dialogs_EnchantDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_EnchantDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void UpdateHeaderPosition()  [RVA 0x31B726C]
// Nekki.SF2.GUI.Dialogs.EnchantDialog$$UpdateHeaderPosition @ RVA 0x31B726C

void Nekki_SF2_GUI_Dialogs_EnchantDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_EnchantDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x31B7270]
// Nekki.SF2.GUI.Dialogs.EnchantDialog$$.ctor @ RVA 0x31B7270

void Nekki_SF2_GUI_Dialogs_EnchantDialog___ctor
               (Nekki_SF2_GUI_Dialogs_EnchantDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x31B7278]
// Nekki.SF2.GUI.Dialogs.EnchantDialog$$IGDDKJJMDLP @ RVA 0x31B7278

void Nekki_SF2_GUI_Dialogs_EnchantDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_EnchantDialog_o *__this,MethodInfo *method)

{
  return;
}

