// FKMBNOGKHBO$$MAHFCKJGBPP @ RVA 0x3491E5C

void FKMBNOGKHBO__MAHFCKJGBPP(FKMBNOGKHBO_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *pNVar3;
  long lVar4;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  UnityEngine_Object_o *pUVar5;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_00;
  Nekki_SF2_GUI_Profile_ProfileScene_o *__this_01;
  System_String_o *pSVar6;
  
  if ((DAT_04568425 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&Method_FKMBNOGKHBO_LGEMJFBPAGO__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04568425 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar6 = (__this->fields).NBMALGBGMIG;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar6 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar6,(MethodInfo *)0x0);
  iVar2 = MMOGKBGEPGM__GFLCMDMEOBN(pSVar6,(MethodInfo *)0x0);
  (__this->fields).AAHBIHMHFPL = iVar2;
  iVar2 = MMOGKBGEPGM__KBMJOICLEHN(iVar2,(MethodInfo *)0x0);
  (__this->fields).KFHECLNEPJM = iVar2;
  pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
    iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
    if (iVar2 != (__this->fields).KFHECLNEPJM) goto LAB_0359218c;
    if (iVar2 == 7) {
      lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      pUVar5 = (UnityEngine_Object_o *)**(undefined8 **)(lVar4 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        __this_01 = (Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar4 + 0xb8);
        iVar2 = HLHCKNLCOBM__OHCFIOGGNHO((__this->fields).AAHBIHMHFPL,(MethodInfo *)0x0);
        if (__this_01 == (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) goto LAB_03592200;
        Nekki_SF2_GUI_Profile_ProfileScene__ScrollToItemByName
                  (__this_01,iVar2,(__this->fields).MNEOMBIFDHF,(MethodInfo *)0x0);
        goto LAB_0359218c;
      }
    }
    else if (iVar2 == 5) {
      lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      pUVar5 = (UnityEngine_Object_o *)**(undefined8 **)(lVar4 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8) ==
            (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_03592200;
        Nekki_SF2_GUI_Map_MapScene__ScrollToItemByName
                  ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8),
                   (__this->fields).AAHBIHMHFPL,(MethodInfo *)0x0);
        goto LAB_0359218c;
      }
    }
    else {
      if (iVar2 != 4) {
LAB_0359218c:
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
      lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      pUVar5 = (UnityEngine_Object_o *)**(undefined8 **)(lVar4 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        __this_00 = (Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar4 + 0xb8);
        iVar2 = BKBFFEJEBAI__PPGMDDODKFG((__this->fields).AAHBIHMHFPL,(MethodInfo *)0x0);
        if (__this_00 == (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_03592200;
        Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
                  (__this_00,iVar2,(__this->fields).MNEOMBIFDHF,(MethodInfo *)0x0);
        goto LAB_0359218c;
      }
    }
    pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                  thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EAPNEKLDLLM(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03592200:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

