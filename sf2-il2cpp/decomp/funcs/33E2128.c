// VideoPlayerController$$OnApplicationPause @ RVA 0x33E2128

void VideoPlayerController__OnApplicationPause
               (VideoPlayerController_o *__this,bool DGBEEJNJCHH,MethodInfo *method)

{
  System_Collections_IEnumerator_o *routine;
  
                    /* try { // try from 034e2130 to 035e2137 has its CatchHandler @ 034e2454 */
  if ((!DGBEEJNJCHH) && ((__this->fields)._LFALNJINAPO_k__BackingField != false)) {
    routine = VideoPlayerController__ICKBAPOLICK(__this,(MethodInfo *)0x0);
                    /* try { // try from 034e2148 to 035e214f has its CatchHandler @ 034e2444 */
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    return;
  }
  return;
}

