// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$NMPMNEEHKEL @ RVA 0x33DA9D0

int32_t Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL
                  (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,GGLKHCAIGDI_o *NDLOGJOGFCA,
                  MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_GGLKHCAIGDI__o *pSVar2;
  
  if ((DAT_04567e75 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_get_Count__);
    DAT_04567e75 = 1;
  }
  pSVar2 = (__this->fields).OKIANCELJJF;
  if (pSVar2 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
    iVar1 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)pSVar2,
                       (Il2CppObject *)NDLOGJOGFCA,
                       Method_System_Collections_Generic_List<GGLKHCAIGDI>_IndexOf__);
    if (-1 < iVar1) {
      pSVar2 = (__this->fields).OKIANCELJJF;
      if (pSVar2 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) goto LAB_034daa50;
      if (iVar1 < (pSVar2->fields)._size) {
        return iVar1;
      }
    }
    return 0;
  }
LAB_034daa50:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

