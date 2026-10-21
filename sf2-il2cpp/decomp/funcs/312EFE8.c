// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$ShowPerkHintByIndex @ RVA 0x312EFE8

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__ShowPerkHintByIndex
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,int32_t JJMCKHDALCF,bool DBKMEBGOHLP,
               MethodInfo *method)

{
  int32_t index;
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_RecipePropertyUI__o *__this_00;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *OKOHDENADGD;
  Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *pNVar4;
  
  if ((DAT_045666b9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RecipePropertyUI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RecipePropertyUI>_get_Item__);
    DAT_045666b9 = 1;
  }
  pNVar4 = (__this->fields)._RecipePropertiesUI;
  if ((pNVar4 != (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *)0x0) &&
     (__this_00 = (pNVar4->fields).DPJGAIPHHLG,
     __this_00 != (System_Collections_Generic_List_RecipePropertyUI__o *)0x0)) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 == 0) {
      return;
    }
    iVar2 = iVar1 + -1;
    if (JJMCKHDALCF <= iVar2) {
      iVar2 = JJMCKHDALCF;
    }
    index = 0;
    if (-1 < JJMCKHDALCF) {
      index = iVar2;
    }
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        Method_System_Collections_Generic_List<RecipePropertyUI>_get_Item__);
    if ((pIVar3 != (Il2CppObject *)0x0) && (pIVar3[3].monitor != (UnityEngine_Component_o *)0x0)) {
      OKOHDENADGD = UnityEngine_Component__get_gameObject(pIVar3[3].monitor,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_Forge_RecipeUI__AMKNLFPFLPK(__this,OKOHDENADGD,DBKMEBGOHLP,method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

