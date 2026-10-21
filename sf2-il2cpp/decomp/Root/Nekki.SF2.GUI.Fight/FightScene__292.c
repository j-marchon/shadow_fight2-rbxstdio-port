// TypeDefIndex 292
// Namespace: Nekki.SF2.GUI.Fight
// public class FightScene : Scene<FightScene>
// Fields:
//   private FCJBEKHDLAF NAKHBIFKBGK; // 0x90
//   private PreFight JLJCNEPAFAO; // 0x98

// ===== public override DBMPKPJGIPI get_SceneId()  [RVA 0x3237214]
// Nekki.SF2.GUI.Fight.FightScene$$get_SceneId @ RVA 0x3237214

int32_t Nekki_SF2_GUI_Fight_FightScene__get_SceneId
                  (Nekki_SF2_GUI_Fight_FightScene_o *__this,MethodInfo *method)

{
  return 6;
}


// ===== public void SetRenderLayerMask(byte[] CLNMDFIMKAK)  [RVA 0x323721C]
// Nekki.SF2.GUI.Fight.FightScene$$SetRenderLayerMask @ RVA 0x323721C

void Nekki_SF2_GUI_Fight_FightScene__SetRenderLayerMask
               (Nekki_SF2_GUI_Fight_FightScene_o *__this,System_Byte_array *CLNMDFIMKAK,
               MethodInfo *method)

{
  MNLIBPAOCLG_o *__this_00;
  FCJBEKHDLAF_o *pFVar1;
  BEPJMNAHCAD_o *pBVar2;
  
  pFVar1 = (__this->fields).NAKHBIFKBGK;
  if ((pFVar1 != (FCJBEKHDLAF_o *)0x0) &&
     (pBVar2 = (pFVar1->fields).FAJCMHDLBEJ, pBVar2 != (BEPJMNAHCAD_o *)0x0)) {
    __this_00 = (pBVar2->fields).LIICCFBEOLC;
    if (__this_00 != (MNLIBPAOCLG_o *)0x0) {
      MNLIBPAOCLG__ECPBBMDOEKB(__this_00,CLNMDFIMKAK,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void RestartFight()  [RVA 0x3237250]
// Nekki.SF2.GUI.Fight.FightScene$$RestartFight @ RVA 0x3237250

void Nekki_SF2_GUI_Fight_FightScene__RestartFight
               (Nekki_SF2_GUI_Fight_FightScene_o *__this,MethodInfo *method)

{
  if ((__this->fields).NAKHBIFKBGK != (FCJBEKHDLAF_o *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FixedUpdate()  [RVA 0x3237268]
// Nekki.SF2.GUI.Fight.FightScene$$FixedUpdate @ RVA 0x3237268

void Nekki_SF2_GUI_Fight_FightScene__FixedUpdate
               (Nekki_SF2_GUI_Fight_FightScene_o *__this,MethodInfo *method)

{
  FCJBEKHDLAF_o *__this_00;
  
  __this_00 = (__this->fields).NAKHBIFKBGK;
  if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
    FCJBEKHDLAF__MGEMOHEBNPF(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void CreateFight(AFFHKININGD FBFPLEFCDOK, PJKHAJKEHEL HGEDEAAHJHN, List<PJKHAJKEHEL> ADKCCEDHHGO)  [RVA 0x323727C]
// Nekki.SF2.GUI.Fight.FightScene$$CreateFight @ RVA 0x323727C

void Nekki_SF2_GUI_Fight_FightScene__CreateFight
               (Nekki_SF2_GUI_Fight_FightScene_o *__this,AFFHKININGD_o *FBFPLEFCDOK,
               PJKHAJKEHEL_o *HGEDEAAHJHN,
               System_Collections_Generic_List_PJKHAJKEHEL__o *ADKCCEDHHGO,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  FCJBEKHDLAF_o *pFVar3;
  FCJBEKHDLAF_o **ppFVar4;
  Nekki_SF2_GUI_Fight_PreFight_o **ppNVar5;
  
  if ((DAT_0456702c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PreFight>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6358/*"FightScene.Init _PreFight == null"*/);
    DAT_0456702c = 1;
  }
  pNVar2 = (Nekki_SF2_GUI_Fight_PreFight_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PreFight>__);
  ppNVar5 = &(__this->fields).JLJCNEPAFAO;
  *ppNVar5 = pNVar2;
  thunk_FUN_01c20e04(ppNVar5,pNVar2);
  pNVar2 = *ppNVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_6358/*"FightScene.Init _PreFight == null"*/,(MethodInfo *)0x0);
  }
  pNVar2 = *ppNVar5;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar3 = MGNPHCAAEIO__ECLNPCHEBFA(FBFPLEFCDOK,HGEDEAAHJHN,ADKCCEDHHGO,pNVar2,(MethodInfo *)0x0);
  ppFVar4 = &(__this->fields).NAKHBIFKBGK;
  *ppFVar4 = pFVar3;
  thunk_FUN_01c20e04(ppFVar4,pFVar3);
  return;
}


// ===== protected override void GIENGNEGHPJ(object IMMNELPBGIF)  [RVA 0x32373C4]
// Nekki.SF2.GUI.Fight.FightScene$$GIENGNEGHPJ @ RVA 0x32373C4

void Nekki_SF2_GUI_Fight_FightScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_Fight_FightScene_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  if ((DAT_0456702d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_GIENGNEGHPJ__);
    DAT_0456702d = 1;
  }
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             Method_Nekki_SF2_GUI_Scene<FightScene>_GIENGNEGHPJ__);
  return;
}


// ===== public FCJBEKHDLAF get_Fight()  [RVA 0x323741C]
// Nekki.SF2.GUI.Fight.FightScene$$get_Fight @ RVA 0x323741C

FCJBEKHDLAF_o *
Nekki_SF2_GUI_Fight_FightScene__get_Fight
          (Nekki_SF2_GUI_Fight_FightScene_o *__this,MethodInfo *method)

{
  return (__this->fields).NAKHBIFKBGK;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x3237424]
// Nekki.SF2.GUI.Fight.FightScene$$RandomizeObscuredVars @ RVA 0x3237424

void Nekki_SF2_GUI_Fight_FightScene__RandomizeObscuredVars
               (Nekki_SF2_GUI_Fight_FightScene_o *__this,MethodInfo *method)

{
  FCJBEKHDLAF_o *__this_00;
  
  __this_00 = (__this->fields).NAKHBIFKBGK;
  if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
    FCJBEKHDLAF__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3237438]
// Nekki.SF2.GUI.Fight.FightScene$$.ctor @ RVA 0x3237438

void Nekki_SF2_GUI_Fight_FightScene___ctor
               (Nekki_SF2_GUI_Fight_FightScene_o *__this,MethodInfo *method)

{
  if ((DAT_0456702e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>__ctor__);
    DAT_0456702e = 1;
  }
  Nekki_SF2_GUI_Scene<object>___ctor
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<FightScene>__ctor__);
  return;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x3237480]
// Nekki.SF2.GUI.Fight.FightScene$$CLNAOMIIBLH @ RVA 0x3237480

void Nekki_SF2_GUI_Fight_FightScene__CLNAOMIIBLH
               (Nekki_SF2_GUI_Fight_FightScene_o *__this,MethodInfo *method)

{
  FCJBEKHDLAF_o *__this_00;
  
  if ((DAT_0456702f & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_CLNAOMIIBLH__);
    DAT_0456702f = 1;
  }
  Nekki_SF2_GUI_Scene<object>__CLNAOMIIBLH
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<FightScene>_CLNAOMIIBLH__
            );
  __this_00 = (__this->fields).NAKHBIFKBGK;
  if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
    FCJBEKHDLAF__JCNAJEMHJCN(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void StartFight()  [RVA 0x32374E4]
// Nekki.SF2.GUI.Fight.FightScene$$StartFight @ RVA 0x32374E4

void Nekki_SF2_GUI_Fight_FightScene__StartFight
               (Nekki_SF2_GUI_Fight_FightScene_o *__this,MethodInfo *method)

{
  FCJBEKHDLAF_o *pFVar1;
  
  pFVar1 = (__this->fields).NAKHBIFKBGK;
  if (pFVar1 == (FCJBEKHDLAF_o *)0x0) {
    return;
  }
  FCJBEKHDLAF__DKNNDNIGMIM(pFVar1,(MethodInfo *)0x0);
  pFVar1 = (__this->fields).NAKHBIFKBGK;
  if (pFVar1 != (FCJBEKHDLAF_o *)0x0) {
    FCJBEKHDLAF__MGEMOHEBNPF(pFVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool get_IsRealFightScene()  [RVA 0x323751C]
// Nekki.SF2.GUI.Fight.FightScene$$get_IsRealFightScene @ RVA 0x323751C

bool Nekki_SF2_GUI_Fight_FightScene__get_IsRealFightScene(MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  FCJBEKHDLAF_o *__this;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567030 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    DAT_04567030 = 1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_03337654:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = false;
    if (*(long *)(**(long **)(lVar2 + 0xb8) + 0x90) != 0) {
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((**(long **)(lVar2 + 0xb8) == 0) ||
         (__this = *(FCJBEKHDLAF_o **)(**(long **)(lVar2 + 0xb8) + 0x90),
         __this == (FCJBEKHDLAF_o *)0x0)) goto LAB_03337654;
      bVar1 = FCJBEKHDLAF__DMJLAIKGJEH(__this,(MethodInfo *)0x0);
      bVar1 = !bVar1;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

