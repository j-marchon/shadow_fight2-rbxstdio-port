// Nekki.SF2.GUI.SimpleScroll$$ReservePool @ RVA 0x302AC24

void Nekki_SF2_GUI_SimpleScroll__ReservePool
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t CJNHFNHJHPE,
               System_String_o *PMACBPAMPJA,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *__this_00;
  
  if ((DAT_04565cb9 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Item__
                );
    FUN_01bab630(&Method_OGNCMFBMBMB_OKGEDPADCHO<BaseScrollItem>__);
    DAT_04565cb9 = 1;
  }
  if (__this[1].klass != (Nekki_SF2_GUI_SimpleScroll_c *)0x0) {
    __this_00 = (__this->fields).HBNEMFAMCED;
    pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)__this[1].klass,
                        (Il2CppObject *)PMACBPAMPJA,
                        Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Item__
                       );
    if (((pIVar1 != (Il2CppObject *)0x0) && (pIVar1[1].monitor != (UnityEngine_Component_o *)0x0))
       && (DKIDCBPNMPD = UnityEngine_Component__get_gameObject(pIVar1[1].monitor,(MethodInfo *)0x0),
          __this_00 !=
          (System_Collections_Generic_Dictionary_string__SimpleScroll_LIOIEDNIMLD__o *)0x0)) {
      OGNCMFBMBMB__OKGEDPADCHO<object>
                ((OGNCMFBMBMB_o *)__this_00,DKIDCBPNMPD,PMACBPAMPJA,CJNHFNHJHPE,
                 Method_OGNCMFBMBMB_OKGEDPADCHO<BaseScrollItem>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

