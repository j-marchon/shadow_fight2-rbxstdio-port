// Nekki.SF2.GUI.Shop.ShopScene$$LFHIAJBBKGC @ RVA 0x3436074

void Nekki_SF2_GUI_Shop_ShopScene__LFHIAJBBKGC
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,BNKBGIIJNLF_o *FNLDECDGPBF,MethodInfo *method
               )

{
  MethodInfo *method_00;
  HBNENINHPGF_o *pHVar1;
  ulong local_28;
  
  if ((DAT_04568190 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<HBNENINHPGF_GKFAEIJNFED>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<HBNENINHPGF_GKFAEIJNFED>__ctor__);
    FUN_01bab630(&Method_System_Nullable<HBNENINHPGF_GKFAEIJNFED>_get_HasValue__);
    DAT_04568190 = 1;
  }
  if ((FNLDECDGPBF != (BNKBGIIJNLF_o *)0x0) &&
     (pHVar1 = (FNLDECDGPBF->fields)._GDNLFJIBAAI_k__BackingField, pHVar1 != (HBNENINHPGF_o *)0x0))
  {
    local_28 = 0;
    System_Nullable<Int32Enum>___ctor
              ((System_Nullable_Int32Enum__o)&local_28,(pHVar1->fields).EAJKEHPLGMP,
               Method_System_Nullable<HBNENINHPGF_GKFAEIJNFED>__ctor__);
    if ((local_28 >> 0x20 == 1) && ((local_28 & 0xff) != 0)) {
      Nekki_SF2_GUI_Shop_ShopScene__Refresh(__this,method_00);
    }
  }
  return;
}

