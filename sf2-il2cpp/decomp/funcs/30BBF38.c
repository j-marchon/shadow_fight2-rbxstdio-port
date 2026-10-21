// Nekki.SF2.GUI.Common.SceneMenuScroll$$ENMNHIMEELL @ RVA 0x30BBF38

void Nekki_SF2_GUI_Common_SceneMenuScroll__ENMNHIMEELL
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 031bbf40 to 032bbf47 has its CatchHandler @ 031bc154 */
  if ((DAT_04566245 & 1) == 0) {
                    /* try { // try from 031bbf54 to 032bbf5f has its CatchHandler @ 031bc188 */
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
    DAT_04566245 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._OnStateChanged;
                    /* try { // try from 031bbf6c to 032bbf73 has its CatchHandler @ 031bc184 */
  (__this->fields).IAAABJBDEMK = 1;
  if (__this_00 != (Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *)0x0) {
                    /* try { // try from 031bbf7c to 032bbf83 has its CatchHandler @ 031bc17c */
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,1,
               Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

