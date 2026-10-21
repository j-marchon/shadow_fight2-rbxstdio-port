// Nekki.SF2.GUI.Map.ContentRaid$$Awake @ RVA 0x34AC1C0

void Nekki_SF2_GUI_Map_ContentRaid__Awake
               (Nekki_SF2_GUI_Map_ContentRaid_o *__this,MethodInfo *method)

{
  if ((DAT_04568536 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<SerialDisposable>__);
    DAT_04568536 = 1;
  }
  UniRx_DisposableExtensions__AddTo<object>
            ((Il2CppObject *)(__this->fields).LIFKALBPENI,(UnityEngine_Component_o *)__this,
             Method_UniRx_DisposableExtensions_AddTo<SerialDisposable>__);
  return;
}

