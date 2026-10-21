// Nekki.SF2.GUI.Shop.ItemsPanel$$.cctor @ RVA 0x310DB28

void Nekki_SF2_GUI_Shop_ItemsPanel___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *__this;
  
  if ((DAT_0456655e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo);
    DAT_0456655e = 1;
  }
  __this = (System_Collections_Generic_Dictionary_POIJDKLHHKO__HOOAAGABMBL__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             Method_System_Collections_Generic_Dictionary<POIJDKLHHKO,_HOOAAGABMBL>__ctor__);
  Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->static_fields->FNKAMGMEILJ = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Shop_ItemsPanel_TypeInfo->static_fields,__this);
  return;
}

