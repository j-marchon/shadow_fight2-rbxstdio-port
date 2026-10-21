// Nekki.SF2.GUI.Map.ContentTourChallBoss$$JEAINKCPKKN @ RVA 0x3290F30

bool Nekki_SF2_GUI_Map_ContentTourChallBoss__JEAINKCPKKN
               (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this,AFFHKININGD_o *AGONJKOMAAA,
               MethodInfo *method)

{
  bool bVar1;
  int32_t JLAFGLDIFOC;
  System_Collections_Generic_List_JBCGDIEHOHH__o *__this_00;
  JBCGDIEHOHH_o *__this_01;
  ACHLOMELAJE_o *__this_02;
  JHBHHHKEFOO_o *pJVar2;
  System_Collections_Generic_List_OCOEAJMJEOP__o *__this_03;
  Il2CppObject *pIVar3;
  DOPEEDABNEK_o *__this_04;
  HOOAAGABMBL_o *pHVar4;
  
  if ((DAT_0456731e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<OCOEAJMJEOP>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456731e = 1;
  }
  if (AGONJKOMAAA == (AFFHKININGD_o *)0x0) {
    return false;
  }
  __this_00 = (AGONJKOMAAA->fields).FGAENDJJOGN;
  if (__this_00 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    __this_01 = (JBCGDIEHOHH_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (__this_00->fields)._size + -1,
                           Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((__this_02 != (ACHLOMELAJE_o *)0x0) &&
        (JLAFGLDIFOC = ACHLOMELAJE__EOEAKGGDBFH(__this_02,(MethodInfo *)0x0),
        __this_01 != (JBCGDIEHOHH_o *)0x0)) &&
       (pJVar2 = JBCGDIEHOHH__ALLFNDNBMCO(__this_01,JLAFGLDIFOC,(MethodInfo *)0x0),
       pJVar2 != (JHBHHHKEFOO_o *)0x0)) {
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(pJVar2->fields).GHAAKPDHIJJ,
                         Method_DJNBJHPDKDP_OBECCOPBADO<OCOEAJMJEOP>__);
      if (bVar1) {
        return false;
      }
      __this_03 = (pJVar2->fields).GHAAKPDHIJJ;
      if ((__this_03 != (System_Collections_Generic_List_OCOEAJMJEOP__o *)0x0) &&
         (pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_03,0,
                              Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Item__),
         pIVar3 != (Il2CppObject *)0x0)) {
        if (*(char *)((long)&pIVar3[1].klass + 5) == '\0') {
          return false;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_04 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (__this_04 != (DOPEEDABNEK_o *)0x0) {
          pHVar4 = DOPEEDABNEK__CKKIPBAIEMN(__this_04,pIVar3[1].monitor,(MethodInfo *)0x0);
          return pHVar4 != (HOOAAGABMBL_o *)0x0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

