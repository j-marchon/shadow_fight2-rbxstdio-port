// TypeDefIndex 5
// Namespace: Nekki.SF2.GUI.Scenes
// public class DojoScene : Scene<DojoScene>
// Fields:
//   private FCJBEKHDLAF HPKHMGLOLPJ; // 0x90
//   public bool NeedRestart; // 0x98

// ===== public override DBMPKPJGIPI get_SceneId()  [RVA 0x2FEE850]
// Nekki.SF2.GUI.Scenes.DojoScene$$get_SceneId @ RVA 0x2FEE850

int32_t Nekki_SF2_GUI_Scenes_DojoScene__get_SceneId
                  (Nekki_SF2_GUI_Scenes_DojoScene_o *__this,MethodInfo *method)

{
  return 3;
}


// ===== private void FPEKBEKECCH(BaseDialog LMEHKLFGEHI)  [RVA 0x2FEE858]
// Nekki.SF2.GUI.Scenes.DojoScene$$FPEKBEKECCH @ RVA 0x2FEE858

void Nekki_SF2_GUI_Scenes_DojoScene__FPEKBEKECCH
               (Nekki_SF2_GUI_Scenes_DojoScene_o *__this,
               Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *pGVar2;
  NDPMLPGANCI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  
  if ((DAT_04565a4e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a4e = 1;
  }
  if ((__this->fields).NeedRestart == false) {
    return;
  }
  pGVar2 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pGVar2 != (GCIFMNHADDF_o *)0x0) {
    x = (pGVar2->fields)._AOOFDKJAALA_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    (__this->fields).NeedRestart = false;
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EKPAFDJIAGI
                (__this_00,3,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FixedUpdate()  [RVA 0x2FEE90C]
// Nekki.SF2.GUI.Scenes.DojoScene$$FixedUpdate @ RVA 0x2FEE90C

void Nekki_SF2_GUI_Scenes_DojoScene__FixedUpdate
               (Nekki_SF2_GUI_Scenes_DojoScene_o *__this,MethodInfo *method)

{
  FCJBEKHDLAF_o *__this_00;
  
  if (((__this->fields).super.DHKAODBNGNJ != false) &&
     (__this_00 = (__this->fields).HPKHMGLOLPJ, __this_00 != (FCJBEKHDLAF_o *)0x0)) {
    FCJBEKHDLAF__MGEMOHEBNPF(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x2FEE928]
// Nekki.SF2.GUI.Scenes.DojoScene$$.ctor @ RVA 0x2FEE928

void Nekki_SF2_GUI_Scenes_DojoScene___ctor
               (Nekki_SF2_GUI_Scenes_DojoScene_o *__this,MethodInfo *method)

{
  if ((DAT_04565a4f & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<DojoScene>__ctor__);
    DAT_04565a4f = 1;
  }
  Nekki_SF2_GUI_Scene<object>___ctor
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<DojoScene>__ctor__);
  return;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x2FEE970]
// Nekki.SF2.GUI.Scenes.DojoScene$$CLNAOMIIBLH @ RVA 0x2FEE970

void Nekki_SF2_GUI_Scenes_DojoScene__CLNAOMIIBLH
               (Nekki_SF2_GUI_Scenes_DojoScene_o *__this,MethodInfo *method)

{
  GCIFMNHADDF_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  FCJBEKHDLAF_o *__this_01;
  
  if ((DAT_04565a50 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_DojoScene_FPEKBEKECCH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<DojoScene>_CLNAOMIIBLH__);
    DAT_04565a50 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__CLNAOMIIBLH
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<DojoScene>_CLNAOMIIBLH__)
  ;
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    GCIFMNHADDF__JNDNMPDMDGB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    __this_01 = (__this->fields).HPKHMGLOLPJ;
    if (__this_01 != (FCJBEKHDLAF_o *)0x0) {
      FCJBEKHDLAF__JCNAJEMHJCN(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ(object IMMNELPBGIF)  [RVA 0x2FEEA3C]
// Nekki.SF2.GUI.Scenes.DojoScene$$GIENGNEGHPJ @ RVA 0x2FEEA3C

void Nekki_SF2_GUI_Scenes_DojoScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_Scenes_DojoScene_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  MEJIKMPNBNL_o *__this_00;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_01;
  Il2CppObject *pIVar2;
  AFFHKININGD_o *pAVar3;
  ACHLOMELAJE_o *__this_02;
  PAMEPBLOLPB_o *CJNHFNHJHPE;
  FCJBEKHDLAF_o *pFVar4;
  GCIFMNHADDF_o *__this_03;
  System_Action_BaseDialog__o *CJNHFNHJHPE_00;
  HJNDPNIMBBG_o *pHVar5;
  
  if ((DAT_04565a51 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_DojoScene_FPEKBEKECCH__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<DojoScene>_GIENGNEGHPJ__);
    DAT_04565a51 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             Method_Nekki_SF2_GUI_Scene<DojoScene>_GIENGNEGHPJ__);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__ICKMHABALIC((MethodInfo *)0x0);
  if (((__this_00 != (MEJIKMPNBNL_o *)0x0) &&
      (__this_01 = MEJIKMPNBNL__LJOCPCHJNIJ(__this_00,0,true,(MethodInfo *)0x0),
      __this_01 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0)) &&
     (pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,0,
                          Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__),
     pIVar2 != (Il2CppObject *)0x0)) {
    pAVar3 = (AFFHKININGD_o *)
             (*pIVar2->klass->vtable[0x10].methodPtr)(pIVar2,0,pIVar2->klass->vtable[0x10].method);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    pAVar3 = MGNPHCAAEIO__DGFEFLMLKKM(pAVar3,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if ((pAVar3 != (AFFHKININGD_o *)0x0) &&
       (__this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
       __this_02 != (ACHLOMELAJE_o *)0x0)) {
      CJNHFNHJHPE = ACHLOMELAJE__LHFJEODGOJL
                              (__this_02,(pAVar3->fields).KOILJHHCIEE,(MethodInfo *)0x0);
      AFFHKININGD__HKBKHKMMBFG(pAVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
      if (DAT_04565b7e == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7e = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pHVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
      if (pHVar5 != (HJNDPNIMBBG_o *)0x0) {
        bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((pHVar5->fields).NAAMEIBLICP,(MethodInfo *)0x0);
        if (!bVar1) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7e == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7e = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pHVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
          if (pHVar5 == (HJNDPNIMBBG_o *)0x0) goto LAB_030eecf0;
          (pAVar3->fields).LAFKEHDGGND = (pHVar5->fields).NAAMEIBLICP;
          thunk_FUN_01c20e04();
        }
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pFVar4 = MGNPHCAAEIO__ECLNPCHEBFA
                           (pAVar3,(Nekki_SF2_GUI_Fight_PreFight_o *)0x0,(MethodInfo *)0x0);
        (__this->fields).HPKHMGLOLPJ = pFVar4;
        thunk_FUN_01c20e04();
        __this_03 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
        CJNHFNHJHPE_00 =
             (System_Action_BaseDialog__o *)thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_03 != (GCIFMNHADDF_o *)0x0) {
          GCIFMNHADDF__EOAPHMAFKKP(__this_03,CJNHFNHJHPE_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_030eecf0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

