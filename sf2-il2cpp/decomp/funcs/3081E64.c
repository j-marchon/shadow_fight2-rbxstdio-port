// Nekki.SF2.GUI.Map.IndicatorFight$$set_Scale @ RVA 0x3081E64

void Nekki_SF2_GUI_Map_IndicatorFight__set_Scale
               (Nekki_SF2_GUI_Map_IndicatorFight_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value;
  
                    /* try { // try from 03181e70 to 03281eff has its CatchHandler @ 03181a10 */
  if ((DAT_04565ffe & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    DAT_04565ffe = 1;
  }
  (__this->fields).OAEPPCNALGL = CJNHFNHJHPE;
  __this_00 = (UnityEngine_Component_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
  if ((__this_00 != (UnityEngine_Component_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.x = (__this->fields).OAEPPCNALGL;
    value.fields.y = value.fields.x;
    value.fields.z = 0.0;
    UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

