// TypeDefIndex 2119
// Namespace: 
// public class FHHIGHMFNAC : IJIHLBLCJMG
// Fields:

// ===== public override bool JFGBPBOCOIC(BDMDJNOIBKC HJDMBDBJEFL)  [RVA 0x32CDE6C]
// FHHIGHMFNAC$$JFGBPBOCOIC @ RVA 0x32CDE6C

bool FHHIGHMFNAC__JFGBPBOCOIC(FHHIGHMFNAC_o *__this,int32_t HJDMBDBJEFL,MethodInfo *method)

{
  return true;
}


// ===== public void .ctor()  [RVA 0x32CDE74]
// FHHIGHMFNAC$$.ctor @ RVA 0x32CDE74

void FHHIGHMFNAC___ctor(FHHIGHMFNAC_o *__this,MethodInfo *method)

{
  IJIHLBLCJMG___ctor((IJIHLBLCJMG_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override DBNEAJMCOLB KGGGBHEMAOO()  [RVA 0x32CDE7C]
// FHHIGHMFNAC$$KGGGBHEMAOO @ RVA 0x32CDE7C

int32_t FHHIGHMFNAC__KGGGBHEMAOO(FHHIGHMFNAC_o *__this,MethodInfo *method)

{
  return 0xe;
}


// ===== public override void NKLGCNHLBAF()  [RVA 0x32CDE84]
// FHHIGHMFNAC$$NKLGCNHLBAF @ RVA 0x32CDE84

void FHHIGHMFNAC__NKLGCNHLBAF(FHHIGHMFNAC_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  AFFHKININGD_o *pAVar2;
  DNELIPCHKLK_o *pDVar3;
  PKHMIGFEJCL_o *__this_00;
  System_String_o **ppSVar4;
  
  if ((DAT_04567534 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04567534 = 1;
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (__this_00 = (pNVar1->fields).QuestParameters, __this_00 != (PKHMIGFEJCL_o *)0x0)) {
    pAVar2 = PKHMIGFEJCL__ACPCMCCBDEI(__this_00,(MethodInfo *)0x0);
    if (pAVar2 == (AFFHKININGD_o *)0x0) {
      pDVar3 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
      (__this_00->fields).NMHCLFFOMJH = pDVar3;
      thunk_FUN_01c20e04();
      ppSVar4 = &(__this_00->fields).PNPKEKHEMCD;
      *ppSVar4 = string_TypeInfo->static_fields->Empty;
      thunk_FUN_01c20e04(ppSVar4);
    }
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0x2c,(MethodInfo *)0x0);
      IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

