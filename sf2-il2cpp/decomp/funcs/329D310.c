// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$NIAGIDFKNLL @ RVA 0x329D310

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__NIAGIDFKNLL
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  UnityEngine_UI_Button_o **ppUVar1;
  bool bVar2;
  FEKEAPCCOOB_o *pFVar3;
  TabView_o *x;
  UnityEngine_UI_Button_o *pUVar4;
  
  if ((DAT_045673a8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673a8 = 1;
  }
  pFVar3 = (__this->fields).HIOOMAJPEJP;
  if (pFVar3 != (FEKEAPCCOOB_o *)0x0) {
    x = FEKEAPCCOOB__IDLJKBJEEHF(pFVar3,DPJIDNBJIBG,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (x == (TabView_o *)0x0) goto LAB_0339d42c;
      (*x->klass[1]._1.image)(x,(__this->fields).FBILHKCKHEJ,x->klass[1]._1.gc_desc);
    }
    pUVar4 = (__this->fields).BNIGIFNBGJE;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppUVar1 = &(__this->fields).BNIGIFNBGJE;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      if (*ppUVar1 == (UnityEngine_UI_Button_o *)0x0) goto LAB_0339d42c;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)*ppUVar1,true,(MethodInfo *)0x0);
    }
    pFVar3 = (__this->fields).HIOOMAJPEJP;
    if (pFVar3 != (FEKEAPCCOOB_o *)0x0) {
      pUVar4 = FEKEAPCCOOB__MJEMLECEAHI(pFVar3,DPJIDNBJIBG,(MethodInfo *)0x0);
      *ppUVar1 = pUVar4;
      thunk_FUN_01c20e04(ppUVar1,pUVar4);
      if (*ppUVar1 != (UnityEngine_UI_Button_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)*ppUVar1,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0339d42c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

