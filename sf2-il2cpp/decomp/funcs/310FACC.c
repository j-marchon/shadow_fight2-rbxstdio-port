// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToEquippedItem @ RVA 0x310FACC

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToEquippedItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_o *__this_00;
  System_Predicate_IGFGDDANEPE__o **ppSVar2;
  System_Func_HOOAAGABMBL__bool__o *DFHDGELMHHG;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar3;
  GGHCLMEFIGO_o *pGVar4;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar5;
  System_Predicate_IGFGDDANEPE__o *match;
  
  if ((DAT_04566578 & 1) == 0) {
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_HJHKHGCOMIB__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_FindAll__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_<>c_JGOBFMONINJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo);
    DAT_04566578 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_TypeInfo,method);
  Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI___ctor(__this_00,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
     (pGVar4 = (pAVar3->fields).OIDPLCLELEN, pGVar4 != (GGHCLMEFIGO_o *)0x0)) {
    pSVar5 = (pGVar4->fields).DPOPJKJLDEE;
    if ((Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    match = Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9__72_0;
    if (match == (System_Predicate_IGFGDDANEPE__o *)0x0) {
      if ((Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = (System_Predicate_IGFGDDANEPE__o *)
              thunk_FUN_01bda818(System_Predicate<IGFGDDANEPE>_TypeInfo);
      System_Predicate<object>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9__72_0;
      *ppSVar2 = match;
      thunk_FUN_01c20e04(ppSVar2,match);
    }
    if ((pSVar5 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) &&
       (pSVar5 = (System_Collections_Generic_List_IGFGDDANEPE__o *)
                 System_Collections_Generic_List<object>__FindAll
                           ((System_Collections_Generic_List_object__o *)pSVar5,
                            (System_Predicate_T__o *)match,
                            Method_System_Collections_Generic_List<IGFGDDANEPE>_FindAll__),
       __this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_o *)0x0)) {
      (__this_00->fields).equipedItems = pSVar5;
      thunk_FUN_01c20e04();
      DFHDGELMHHG = (System_Func_HOOAAGABMBL__bool__o *)
                    thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
      method_00 = Method_Nekki_SF2_GUI_Shop_ItemsPanel_HOHHMCACAFI_HJHKHGCOMIB__;
      System_Func<object,_bool>___ctor();
      bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__NIGJNNJIOGE(__this,DFHDGELMHHG,method_00);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

