// EOOEOHKLOFJ$$HKIPENGAJPF @ RVA 0x30C5D90

void EOOEOHKLOFJ__HKIPENGAJPF(MethodInfo *method)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_045662b4 & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&NDPMLPGANCI_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_get_Current__);
    DAT_045662b4 = 1;
  }
  NDPMLPGANCI_TypeInfo->static_fields->EHFCPINCBGC = true;
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  if ((Nekki_SF2_GUI_Scenes_GameLoaderScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
      (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *)0x0) {
    Nekki_SF2_GUI_Scenes_GameLoaderScene__ResetLoadingModules
              ((Nekki_SF2_GUI_Scenes_GameLoaderScene_o *)**(undefined8 **)(lVar1 + 0xb8),
               (MethodInfo *)0x0);
  }
  lVar1 = *(long *)(Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  plVar5 = (long *)**(undefined8 **)(lVar1 + 0xb8);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar1 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(HCOEEOMMEFL_c **)(piVar4 + -2) == HCOEEOMMEFL_TypeInfo) {
        puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_031c5ed8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01b81914(plVar5,HCOEEOMMEFL_TypeInfo,2);
LAB_031c5ed8:
                    /* WARNING: Could not recover jumptable at 0x031c5ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,puVar2[1]);
  return;
}

