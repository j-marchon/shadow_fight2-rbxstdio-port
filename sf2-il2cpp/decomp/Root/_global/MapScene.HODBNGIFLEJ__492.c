// TypeDefIndex 492
// Namespace: 
// public class MapScene.HODBNGIFLEJ
// Fields:
//   private readonly DNELIPCHKLK BBELCDHPJIP; // 0x10

// ===== public void .ctor(DNELIPCHKLK DBIAAJNKHLH)  [RVA 0x3589680]
// Nekki.SF2.GUI.Map.MapScene.HODBNGIFLEJ$$.ctor @ RVA 0x3589680

void Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ___ctor
               (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BBELCDHPJIP = DBIAAJNKHLH;
  thunk_FUN_01c20e04(&__this->fields,DBIAAJNKHLH);
  return;
}


// ===== public OOMHDDBCBJP FLCKLDFJPGF()  [RVA 0x35896B0]
// Nekki.SF2.GUI.Map.MapScene.HODBNGIFLEJ$$FLCKLDFJPGF @ RVA 0x35896B0

OOMHDDBCBJP_o *
Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ__FLCKLDFJPGF
          (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *__this,MethodInfo *method)

{
  MEJIKMPNBNL_o *pMVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *method_00;
  DNELIPCHKLK_o *pDVar3;
  
  pMVar1 = Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ__HLLNKJKFIEB(__this,method);
  if (pMVar1 == (MEJIKMPNBNL_o *)0x0) {
    return (OOMHDDBCBJP_o *)0x0;
  }
  pMVar1 = Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ__HLLNKJKFIEB(__this,method_00);
  pDVar3 = (__this->fields).BBELCDHPJIP;
  if ((pDVar3 != (DNELIPCHKLK_o *)0x0) && (pMVar1 != (MEJIKMPNBNL_o *)0x0)) {
    pOVar2 = MEJIKMPNBNL__KKPHCCBPIMN(pMVar1,(pDVar3->fields).GJFJPLHCBKJ,(MethodInfo *)0x0);
    return pOVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public MEJIKMPNBNL HLLNKJKFIEB()  [RVA 0x35896F0]
// Nekki.SF2.GUI.Map.MapScene.HODBNGIFLEJ$$HLLNKJKFIEB @ RVA 0x35896F0

MEJIKMPNBNL_o *
Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ__HLLNKJKFIEB
          (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *__this,MethodInfo *method)

{
  MEJIKMPNBNL_o *pMVar1;
  DNELIPCHKLK_o *pDVar2;
  System_String_o *KGLJICLJHEL;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04568d28 & 1) == 0) {
    auVar3 = FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568d28 = 1;
  }
  pDVar2 = (__this->fields).BBELCDHPJIP;
  if (pDVar2 != (DNELIPCHKLK_o *)0x0) {
    KGLJICLJHEL = (pDVar2->fields).GDPFBDIJNHA;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar1 = NLPJLHOEAOE__KHHBHBLIANB(KGLJICLJHEL,(MethodInfo *)0x0);
    return pMVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

