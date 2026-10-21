// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$GDPFPAHLCJM @ RVA 0x3256AA0

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GDPFPAHLCJM
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int64_t IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int32_t iVar5;
  FEKEAPCCOOB_o *pFVar6;
  TabView_o *x;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  int DPJIDNBJIBG;
  
  if ((DAT_04567164 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567164 = 1;
  }
  pFVar6 = (__this->fields).HIOOMAJPEJP;
  if (pFVar6 == (FEKEAPCCOOB_o *)0x0) {
LAB_03353c00:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (pFVar6->fields).GEKOMLGOJOP;
  iVar5 = FEKEAPCCOOB__KPOBFGCNFAG(pFVar6,(MethodInfo *)0x0);
  if (0 < iVar5) {
    bVar2 = false;
    DPJIDNBJIBG = 0;
    do {
      pFVar6 = (__this->fields).HIOOMAJPEJP;
      if (pFVar6 == (FEKEAPCCOOB_o *)0x0) goto LAB_03353c00;
      x = FEKEAPCCOOB__IDLJKBJEEHF(pFVar6,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (x == (TabView_o *)0x0) {
LAB_03353ad8:
        x = (TabView_o *)0x0;
      }
      else {
        bVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo->_2).naturalAligment;
        if ((x->klass->_2).naturalAligment < bVar4) goto LAB_03353ad8;
        if ((x->klass->_2).typeHierarchy[(ulong)bVar4 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo) {
          x = (TabView_o *)0x0;
        }
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        if (x == (TabView_o *)0x0) goto LAB_03353c00;
        bVar4 = (*(code *)x->klass[1]._1.name)(x,x->klass[1]._1.namespaze);
        if ((bVar4 & 1) == 0) {
          (*(x->klass->vtable)._18_Hide.methodPtr)(x,(x->klass->vtable)._18_Hide.method);
          bVar2 = iVar1 == DPJIDNBJIBG;
        }
        else if (iVar1 == DPJIDNBJIBG) {
          (*x->klass[1]._1.image)(x,0,x->klass[1]._1.gc_desc);
        }
        pFVar6 = (__this->fields).HIOOMAJPEJP;
        if (((pFVar6 == (FEKEAPCCOOB_o *)0x0) ||
            (__this_00 = FEKEAPCCOOB__MJEMLECEAHI(pFVar6,DPJIDNBJIBG,(MethodInfo *)0x0),
            __this_00 == (UnityEngine_UI_Button_o *)0x0)) ||
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03353c00;
        UnityEngine_GameObject__SetActive(__this_01,(bool)(bVar4 & 1),(MethodInfo *)0x0);
      }
      DPJIDNBJIBG = DPJIDNBJIBG + 1;
    } while (iVar5 != DPJIDNBJIBG);
    if (bVar2) {
      pFVar6 = (__this->fields).HIOOMAJPEJP;
      if (pFVar6 != (FEKEAPCCOOB_o *)0x0) {
        FEKEAPCCOOB__KJDNLILMFFF(pFVar6,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03353c00;
    }
  }
  return;
}

