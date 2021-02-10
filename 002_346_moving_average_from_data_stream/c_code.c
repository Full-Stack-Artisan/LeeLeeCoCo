typedef struct {
    int size;
    int left_most;
    int right_most;
    int *array;
    double sum;
    int curr_size;
} MovingAverage;

/** Initialize your data structure here. */

MovingAverage* movingAverageCreate(int size) {
    MovingAverage* obj = (MovingAverage*)malloc(sizeof(MovingAverage));
    obj->size = size;
    obj->left_most = -1;
    obj->right_most = -1;
    obj->array = (int*)malloc(sizeof(int)*size);
    obj->sum = 0;
    obj->curr_size = 0;
    return obj;
}

double movingAverageNext(MovingAverage* obj, int val) {
  if (obj->size != obj->curr_size)
      obj->curr_size+=1;
  else {
      obj->left_most = (obj->left_most+1)%obj->size;
      obj->sum -= (obj->array)[obj->left_most];
  }
  obj->right_most = (obj->right_most+1)%obj->size;
  (obj->array)[obj->right_most] = val;
  obj->sum += val;
  return obj->sum/obj->curr_size;
}

void movingAverageFree(MovingAverage* obj) {
    free(obj->array);
    obj->array = NULL;
    free(obj);
    obj = NULL;
}

/**
 * Your MovingAverage struct will be instantiated and called as such:
 * MovingAverage* obj = movingAverageCreate(size);
 * double param_1 = movingAverageNext(obj, val);
 
 * movingAverageFree(obj);
*/