// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$GIENGNEGHPJ @ RVA 0x3172720

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__GIENGNEGHPJ
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  HJNDPNIMBBG_o *__this_01;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_02;
  NDPMLPGANCI_o *__this_03;
  System_Action_GLINEGMOOBM__o *CJNHFNHJHPE;
  
  if ((DAT_0456692e & 1) == 0) {
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_NKKEKIKFFCJ__);
    DAT_0456692e = 1;
  }
  pUVar2 = (UnityEngine_Object_o *)
           UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DontDestroyOnLoad(pUVar2,(MethodInfo *)0x0);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7e == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7e = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
    if (__this_01 != (HJNDPNIMBBG_o *)0x0) {
      pUVar2 = (UnityEngine_Object_o *)HJNDPNIMBBG__JDHIIDFJMBM(__this_01,(MethodInfo *)0x0);
      bVar1 = UnityEngine_Object__op_Implicit(pUVar2,(MethodInfo *)0x0);
      if (bVar1) {
        __this_02 = (__this->fields)._background;
        if (__this_02 == (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) goto LAB_032728a0;
        Nekki_SF2_GUI_SpriteRendererQuality__ChangeSprite
                  (__this_02,(UnityEngine_Sprite_o *)pUVar2,(MethodInfo *)0x0);
      }
      __this_03 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_GLINEGMOOBM__o *)
                    thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_03 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__IIOPONEHEGP(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_032728a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

