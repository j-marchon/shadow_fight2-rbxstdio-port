// Nekki.SF2.GUI.Common.Hints.HintUI$$Awake @ RVA 0x32FCD80

void Nekki_SF2_GUI_Common_Hints_HintUI__Awake
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  Nekki_SF2_GUI_ResolutionImage_array *EFOOOIEHBKP;
  UnityEngine_UI_Text_o *JLNPKGGFFDD;
  UnityEngine_UI_Graphic_o *DAHDMONMPFJ;
  MethodInfo *pMVar3;
  MethodInfo *in_x2;
  
  if ((DAT_045676f1 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<Graphic>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<Text>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Graphic>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<ResolutionImage>__);
    DAT_045676f1 = 1;
  }
  uVar1 = (__this->fields)._ID;
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    goto switchD_033fcc88_caseD_0;
  case 4:
  case 5:
  case 6:
    pMVar3 = Method_UnityEngine_Component_GetComponentsInChildren<ResolutionImage>__;
    EFOOOIEHBKP = (Nekki_SF2_GUI_ResolutionImage_array *)
                  UnityEngine_Component__GetComponentsInChildren<object>
                            ((UnityEngine_Component_o *)__this,true,
                             (MethodInfo_1E71BD0 *)
                             Method_UnityEngine_Component_GetComponentsInChildren<ResolutionImage>__
                            );
    Nekki_SF2_GUI_Common_Hints_HintUI__LDIOMNGBBHD(__this,EFOOOIEHBKP,pMVar3);
    return;
  case 7:
  case 8:
    pNVar2 = (Nekki_SF2_GUI_ResolutionImage_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    Nekki_SF2_GUI_Common_Hints_HintUI__DNIJFEPCHFA(__this,pNVar2,in_x2);
    pMVar3 = Method_UnityEngine_Component_GetComponentInChildren<Text>__;
    JLNPKGGFFDD = (UnityEngine_UI_Text_o *)
                  UnityEngine_Component__GetComponentInChildren<object>
                            ((UnityEngine_Component_o *)__this,true,
                             (MethodInfo_1E71400 *)
                             Method_UnityEngine_Component_GetComponentInChildren<Text>__);
    Nekki_SF2_GUI_Common_Hints_HintUI__NDOMIJALNGD(__this,JLNPKGGFFDD,pMVar3);
    return;
  case 9:
  case 10:
    DAHDMONMPFJ = (UnityEngine_UI_Graphic_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this,
                             Method_UnityEngine_Component_GetComponent<Graphic>__);
LAB_033fcd30:
    Nekki_SF2_GUI_Common_Hints_HintUI__AHDBBJNEIJP(__this,DAHDMONMPFJ,in_x2);
    return;
  default:
    if (5 < uVar1 - 100) {
      if ((uVar1 & 0xfffffffe) != 500) {
        return;
      }
      DAHDMONMPFJ = (UnityEngine_UI_Graphic_o *)
                    UnityEngine_Component__GetComponentInChildren<object>
                              ((UnityEngine_Component_o *)__this,
                               Method_UnityEngine_Component_GetComponentInChildren<Graphic>__);
      goto LAB_033fcd30;
    }
switchD_033fcc88_caseD_0:
    pNVar2 = (Nekki_SF2_GUI_ResolutionImage_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    Nekki_SF2_GUI_Common_Hints_HintUI__DNIJFEPCHFA(__this,pNVar2,in_x2);
    return;
  }
}

